#include<bits/stdc++.h>
using namespace std;

const int N = 1e4;

vector<int> graph[N];
bool vis[N] = {false};

void dfs(int vertex){
	if(vis[vertex]) 
		return;
	
	vis[vertex] = true;
	for(int child: graph[vertex]){
		dfs(child);
	}
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
			
	int n,e,v1,v2;
	int parent;
	cin >> n >> e;
	for (int i = 0; i < e; ++i)
	{
		/* code */
		cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	
	int cnt = 0;
	for (int i = 1; i <= n; ++i)
	{
		/* code */
		if (vis[i]) continue;
		dfs(i);
		cnt++;
	}
	cout << cnt << endl;
}