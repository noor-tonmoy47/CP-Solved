#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	while(t--){
		ll n, ans;
		cin >> n;

		ans = n;

		string s; 
		cin >> s;

		for (int i = 0; i < n /2 ; ++i)
		{
			/* code */
			if(s[i] == s[n-i - 1]) break;
			
			else ans -= 2;
		}

		cout << ans << "\n";

	}
}