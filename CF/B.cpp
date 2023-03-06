#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		string s;
		cin >> s;
		ll x = 0 , y = 0;
		bool flag = false;
		for (int i = 0; i < n; ++i)
		{
			
			

			if(s[i] == 'L') x--;

			else if (s[i] == 'R') x++;

			else if (s[i] == 'U') y++;

			else y--;

			if(x == 1 && y == 1) flag = true;
		}

		if (flag)
		{
			cout << "YES" <<"\n";
		}

		else{
			cout << "NO" <<"\n";
		}
	}
}