#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Graph {
private:
    // Mapping from nodes to their neighbors and associated costs
    unordered_map<string, vector<pair<string, int>>> edges;

public:
    // Add an edge to the graph
    void add_edge(string start_node, string end_node, int cost) {
        edges[start_node].push_back({end_node, cost});
    }

    // Get neighbors of a given node
    vector<pair<string, int>> get_neighbors(string node) {
        return edges[node];
    }

    // Heuristic function to estimate the distance from a node to the goal
    int heuristic(string node, string goal) {
        // Pre-calculated heuristic values for each node (straight-line distance to the goal)
        unordered_map<string, int> dict_h = {
            {"Arad", 366},
            {"Buccharesr", 0},
            {"Craioya", 160},
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
            {"Zerind", 374}
        };
        // Return the heuristic value for the given node
        return dict_h[node];
    }

    // A* search algorithm to find the shortest path from start to goal
    pair<vector<string>, int> a_star_search(string start, string goal) {
        // Priority queue to maintain the frontier nodes, ordered by total cost
        priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> frontier;
        // Push the start node into the frontier with cost 0
        frontier.push({0, start});
        // Map to store the node that came before each node in the shortest path
        unordered_map<string, string> came_from;
        // Map to store the cost to reach each node from the start node
        unordered_map<string, int> cost_so_far;
        // Initialize the start node in both maps
        came_from[start] = "";
        cost_so_far[start] = 0;

        // Continue searching until the frontier is empty
        while (!frontier.empty()) {
            // Pop the node with the lowest total cost from the frontier
            string current = frontier.top().second;
            frontier.pop();

            // Check if the current node is the goal node
            if (current == goal) {
                // If so, break the loop
                break;
            }

            // Iterate through neighbors of the current node
            for (auto neighbor : get_neighbors(current)) {
                string next = neighbor.first;
                int new_cost = cost_so_far[current] + neighbor.second;
                // Update the cost to reach the neighbor if it's not visited yet or the new cost is lower
                if (cost_so_far.find(next) == cost_so_far.end() || new_cost < cost_so_far[next]) {
                    cost_so_far[next] = new_cost;
                    // Calculate the priority (total cost) for the neighbor node
                    int priority = new_cost + heuristic(next, goal);
                    // Push the neighbor into the frontier with its priority
                    frontier.push({priority, next});
                    // Update the came_from map to remember the path
                    came_from[next] = current;
                }
            }
        }

        // Reconstruct the shortest path from start to goal
        vector<string> path;
        string current = goal;
        while (current != start) {
            path.push_back(current);
            current = came_from[current];
        }
        path.push_back(start);
        // Reverse the path to get it from start to goal
        reverse(path.begin(), path.end());

        // Return the shortest path and its total cost
        return {path, cost_so_far[goal]};
    }
};

int main() {
    // Create a graph instance
    Graph graph;
    // Add edges to the graph representing the connections between nodes and their associated costs
    graph.add_edge("Arad", "Zerind", 75);
    // Add more edges here...

    // Perform A* search on the graph to find the shortest path from "Arad" to "Buccharesr"
    auto result = graph.a_star_search("Arad", "Buccharesr");
    // Extract the shortest path and its total cost from the result
    vector<string> path = result.first;
    int cost = result.second;

    // Print the shortest path and its total cost
    cout << "Shortest path:";
    for (const auto& node : path) {
        cout << " " << node;
    }
    cout << "\nTotal cost: " << cost << endl;

    return 0;
}
