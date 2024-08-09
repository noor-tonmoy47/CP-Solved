#include<bits/stdc++.h>
using namespace std;

const int N = 1e4;

vector<int>graph[N];
bool vis[N] = {false};

void dfs(int vertex){
	cout  << vertex << endl;
	vis[vertex] = true;
	
	for(int child: graph[vertex]){
		cout << "parent: " << vertex << " " <<"child: "  << child << endl;
		if(vis[child]) continue;
		
		dfs(child);
		
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,m,v1,v2;
			
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		/* code */
		cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);

	}
	dfs(1);
}