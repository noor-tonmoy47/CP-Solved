#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll M = 1e9 + 7;
const ll N = 50010;

ll fact(ll n){
	if(n == 1) return 1;
	else return ((n % M) * (fact(n-1) % M)) % M;
	//else return n * fact(n-1);
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// ll factorials[N];
	// factorials[0] = 1;
	// for (int i = 1; i <= 50000; ++i)
	// {
	// 	/* code */
	// 	factorials[i] = fact(i);
	// }

	// for (int i = 0; i <= 50000; ++i)
	// {
	// 	/* code */
	// 	cout << factorials[i] <<"\n";
	// }
	ll T;
	cin >> T;
	while(T--){
		ll x, ans = 0;
		cin >> x;
		ll factorial = fact(x);
		for (ll i = 1; i * i <= factorial; ++i)
		{
			/* code */
			if(factorial % i == 0) ans = (ans % M + 2 % M) % M;
		}
		cout << ans << "\n";
	}
	// //cout << fact(23) << "\n";
	
}