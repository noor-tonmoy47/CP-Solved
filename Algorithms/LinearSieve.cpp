#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 50;

bool isComposite[N];
vector<ll> primes;

void sieve(){
	for (ll i = 2; i < N; ++i)
	{
		/* code */
		if(!isComposite[i]) primes.push_back(i);

		for (ll j = 0; j < primes.size() && i * primes[j] < N ; ++i)
		{
			/* code */
			isComposite[i * primes[j]] = true;
			if(!(i % primes[j])) break;
		}
	}
}
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	sieve();
	for (auto element: primes)
	{
		/* code */
		cout << element << "\n";
	}
}