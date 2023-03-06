#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e6 + 10;
bool isComposite[N];
vector<ll> primes;
void sieve(){
		ll MAX = 1e6;
		isComposite[0] = isComposite[1] = true;
		for (int i = 2; i * i <= MAX; ++i)
		{
			/* code */
			if (!isComposite[i])
			{
				/* code */
				for (int j = i*i; j <= MAX; j += i)
				{
					/* code */
					isComposite[j] = true;
				}
			}
		}

		for (int i = 0; i <= MAX; ++i)
		{
			/* code */
			if (!isComposite[i])
			{
				/* code */
				primes.push_back(i);
			}
		}
}
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	sieve();
	// ll t;
	// cin >> t;

	// while(t--){
		
	// 	ll n , k;
	// 	cin >> n >> k;
		// sieve
		// ll sqrtN = sqrt(n);
		// ll cnt = 0, ans = 0;
		// for (int i = 0; primes[i] <= sqrtN; ++i)
		// {
		// 	/* code */
		// 	cnt++;
		// 	if (primes[i] * primes[i] > k)
		// 	{
		// 		/* code */
		// 		ans++;
		// 	}
		// }
		cout << primes.size()<<"\n";
		//cout << cnt <<" " << ans << "\n";
		
	
	
}