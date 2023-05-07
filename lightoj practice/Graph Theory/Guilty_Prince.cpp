#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxW = 30;
const ll maxH = 30;
ll cnt,w,h;
bool vis[maxW][maxH];
char str[maxW][maxH];
ll dx[] = {1, -1, 0, 0};
ll dy[] = {0, 0, 1, -1};


bool valid(int x, int y){
	if (x>= 0 && x<h && y >= 0 && y<w && str[x][y] != '#' && !vis[x][y])	return true;
	return false;
}

void dfs(int i, int j){
	vis[i][j] = true;
	cnt++;
	for (int k = 0; k < 4; ++k)
	{
		/* code */
		int x = i + dx[k];
		int y = j + dy[k];

		if(valid(x,y)){
			dfs(x,y);
		}
	}
}
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, tc = 1;
	cin >> t;
	while(t--){
	
		cin >> w >> h;
		//ll posX, posY;
		
		for (int i = 0; i < h; ++i)
		{
			/* code */
			
			cin >> str[i];


		}
		memset(vis, 0, sizeof(vis));
		cnt = 0;

		for (int i = 0; i < h; ++i)
		{
			/* code */
			for (int j = 0; j < w; ++j)
			{
				/* code */
				if(str[i][j] =='@'){
					
			 		dfs(i,j);
			 		break;

				}
			}
		}

		//cout << posX << " " << posY <<"\n";

		 //dfs(posX, posY);
		 cout << "Case " << tc++ << ": " << cnt <<"\n";
	} 	
}