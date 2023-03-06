	#include<bits/stdc++.h>
	#define ll long long
	using namespace std;

	int main(){
		
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);

		ll t;
		cin >> t;
		while(t--){
			ll n, sum = 0;
			cin >> n;

			ll ar[n + 10];
			for (int i = 0; i < n; ++i)
			{
				cin >> ar[i];
			}

			if(n == 2){
				if(ar[0] == ar[1] && ar[0] < 0){
					ar[0] += 2 * abs(ar[0]);
					ar[1] += 2 * abs(ar[1]);
				}
			}
			else{
				for (int i = 0; i < n-1; ++i)
				{
					/* code */
					if(ar[i] < 0){
						
						if(abs(ar[i]) >= ar[i+1]){
							ar[i] += 2 * abs(ar[i]);
							ar[i + 1] -= 2 * ar[i+1];
						}

					}
				}
			}
			

			for (int i = 0; i < n; ++i)
			{
				/* code */
				sum += ar[i];
			}
			cout << sum <<"\n";
		}
	}