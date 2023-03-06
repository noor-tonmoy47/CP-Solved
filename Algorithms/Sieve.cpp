#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e8+9;

bool isComposite[N];


void sieve(ll n){
	
	isComposite[0] = true;
	isComposite[1] = true;

	for(ll i = 2; i * i <= n; i++){
		if(!isComposite[i]){
			for(ll j = i*i; j <= n; j += i) isComposite[j]= true;
		}
	}

}
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n;
	cin >> n;
	sieve(n);
	
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(!isComposite[i]){
			cout << i << "\n";
		}
	}
	
	
}