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
		if(n == 1){
			cout << 1 <<"\n";
			continue;
		}
		else if( n % 2 == 0){
			ll x = 1;
		    for (ll i = 0; i < n; i+= 2)
		    {
			/* code */
				if(x * 2 > n) break;
				ara[i] = x * 2;
				x++;
			}
		

			x = n - 1;

			for (ll i = 1; i < n; i+= 2)
			{
			/* code */
				ara[i] = x;
				x -= 2;
			}
		}
		else{
			ll x = 1;
			for (ll i = 0; i < n; i += 2)
			{
				/* code */
				ara[i] = x * 1;
				x++;
			}
		}
		

		for (ll i = 0; i < n; ++i)
		{
			/* code */
			cout << ara[i] <<" ";
		}
		cout << "\n";

	}
}