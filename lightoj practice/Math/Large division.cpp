#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, m = 1;
	cin >> t;
	while(t--){
		string a;
		ll b;
		cin >> a >> b;

		if(a[0] == '-'){
			a.erase(a.begin());
		}

		ll rem = 0, i = 0;
		while(true){
			if(i == a.length()) break;
			ll x = a[i] - '0' + rem * 10;
			rem = x % b;
			i++;
		}

		if(!rem) cout << "Case " << m <<": " << "divisible" << "\n";
		else cout << "Case " << m <<": " << "not divisible" << "\n";

		m++;
	}
}