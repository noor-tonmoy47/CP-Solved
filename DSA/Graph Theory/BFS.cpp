#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> g[N];
//vector<int>s;
int vis[N];

void bfs(int source){
	
	queue<int> q;
	vis[source] = true;
	q.push(source);

	while(!q.empty()){
		int cur_v = q.front();
		q.pop();
		cout << cur_v << " " ;
		for(int n: g[cur_v]){
			if(!vis[n]){
				q.push(n);
				//cout << n << endl;
				vis[n] = true;
			}
		}

	}
	
	
	//s.push_back(q.pop());
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	int n;
	cin >> n;
	for (int i = 0; i < n-1; ++i)
	{
		/* code */
		int x,y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	// q.push(1);
	// for(int x: q){
	// 	if(q.empty()) break;
	// 	bfs();
	// }
	bfs(1);
}
