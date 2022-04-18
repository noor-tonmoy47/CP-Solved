#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		cin >> n;
		vector<int> vN(n, 0);
		for (int i = 0; i < n; ++i)
			{
				/* code */
				cin >> vN[i];
			}
		int m;
		cin >> m;
		vector<int> vM(m, 0);	
		for (int i = 0; i < m; ++i)
		{
			/* code */
			cin >> vM[i];
		}
		// for(auto e: vM){
		// 	cout << e <<"\n";
		// }
		for (int i = 0; i < m; ++i)
		{
			/* code */
			for (int j = 0; j < n; ++j)
			{
				/* code */
				if(!((vM[i] - vN[j]) & 1)){
					cnt++;
				}
			}
		}
		cout << cnt <<"\n";
	}
}
