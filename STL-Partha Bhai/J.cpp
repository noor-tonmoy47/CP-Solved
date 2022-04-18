#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,c = 0;
	cin >> t;
	while(t--){
		int n, k , p,ans;
		cin >> n >> k >> p;
		c++;
		ans = k;
		for (int i = 0; i < p; ++i)
		{
			/* code */
			if(ans == n){
				ans = 1;
			}
			else{
				ans++;
			}
		}
		cout <<"Case "<< c << ": " << ans << endl;
	}
}