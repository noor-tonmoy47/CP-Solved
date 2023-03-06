#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	pair<int,int> p;
	while(t--){
		int n,m;
		cin >> n >> m;
		char ara[n][m];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			for (int j = 0; j < m; ++j)
			{
				/* code */
				cin >> ara[i][j];
				if(ara[i][j] == 'o'){
					p.make_pair(i,j);
				}
			}
		}

	}
}