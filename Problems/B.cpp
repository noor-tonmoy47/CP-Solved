#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e4 + 10;
bool isComposite[N];
vector<ll> primes;
vector<ll> ans;
unordered_set<ll> mul;
void sieve(){
	ll MAX = 1e4;
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

void mulOfPrime(){
	for(auto e: primes){
		for(auto x : primes){
			if (e == x) continue;
			if (mul.count(e*x) == 0)
			{
				/* code */
				mul.insert(e * x);
				ans.push_back(e*x);
			}
		}
	}
}
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	sieve();
	mulOfPrime();
	sort(ans.begin() , ans.end());
	ll t;
	cin >> t;
	while(t--){
		ll k;
		cin >> k;
		cout << ans[k-1] <<"\n";
	}
}