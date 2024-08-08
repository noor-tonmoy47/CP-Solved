#include <iostream>
#include <queue>
#include <unordered_map>
#include <limits>

using namespace std;

class Graph {
public:
  void addEdge(const string& start, const string& end, int cost) {
    edges[start][end] = cost;
  }

  vector<string> getNeighbors(const string& node) const {
    if (edges.count(node) == 0) {
      return {};
    }
    vector<string> neighbors;
    for (const auto& [neighbor, _] : edges.at(node)) {
      neighbors.push_back(neighbor);
    }
    return neighbors;
  }

  int heuristic(const string& node, const string& goal) const {
    // Replace with your actual heuristic function for Romanian cities distances
    static const unordered_map<string, int> heuristic_values = {
        {"Arad", 366},
        {"Bucharest", 0},
        {"Craiova", 160},
        {"Dobreta", 242},
        {"Eforie", 161},
        {"Fagaras", 178},
        {"Giurgiu", 77},
        {"Hirsova", 151},
        {"Iasi", 226},
        {"Lugoj", 244},
        {"Mehadia", 241},
        {"Neamt", 234},
        {"Oradea", 380},
        {"Pitesti", 98},
        {"Rimnicu Vilcea", 193},
        {"Sibiu", 253},
        {"Timisoara", 329},
        {"Urziceni", 80},
        {"Vaslui", 190},
        {"Zerind", 374}};
    return heuristic_values.at(node);
  }

  pair<vector<string>, int> aStarSearch(const string& start, const string& goal) const {
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> frontier;
    unordered_map<string, string> came_from;
    unordered_map<string, int> cost_so_far;

    came_from[start] = "";
    cost_so_far[start] = 0;
    frontier.push({0, start});

    while (!frontier.empty()) {
      auto current = frontier.top().second;
      frontier.pop();

      if (current == goal) {
        break;
      }

      for (const string& neighbor : getNeighbors(current)) {
        int new_cost = cost_so_far[current] + edges.at(current).at(neighbor);
        if (cost_so_far.count(neighbor) == 0 || new_cost < cost_so_far[neighbor]) {
          cost_so_far[neighbor] = new_cost;
          int priority = new_cost + heuristic(neighbor, goal);
          frontier.push({priority, neighbor});
          came_from[neighbor] = current;
        }
      }
    }

    vector<string> path;
    string current = goal;
    while (current != start) {
      path.push_back(current);
      current = came_from[current];
    }
    path.push_back(start);
    reverse(path.begin(), path.end());

    return {path, cost_so_far[goal]};
  }

private:
  unordered_map<string, unordered_map<string, int>> edges;
};

int main() {
  Graph graph;
  graph.addEdge("Arad", "Zerind", 75);
  graph.addEdge("Arad", "Sibiu", 140);
  graph.addEdge("Arad", "Timisoara", 118);
  // ... (remaining edges as in the Python code)

  auto result = graph.aStarSearch("Arad", "Bucharest");
  cout << "Shortest path: ";
  for (const string& city : result.first) {
    cout << city << " -> ";
  }
  cout << "Bucharest" << endl;
  cout << ";
}