#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	unordered_map<char, ll> mp;
	while(t--){
		ll n,x = 0, ans = 0;
		cin >> n;
		string s;
		cin >> s;
		//ll ar[n+10];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			mp[s[i]]++;
		}
		for(auto e : mp){
			if(x == 2){
				ans--;
				x = 0;
			}
			if(e.second >= 2){
				x++;
				ans += 2;
				continue;
			}
			else{
				ans += e.second;
			}
		}

		cout << ans <<"\n";
	}
}