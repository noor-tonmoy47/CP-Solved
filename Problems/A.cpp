#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, k;
	cin >> n >> k;

	if(n % 2 != 0){
		if (k <= (n/2 + 1))
		{
			/* code */
			cout << 2 * k - 1 <<"\n";
		}
		else{
			cout << 2 * (k - (n/2 + 1)) << "\n" ;
		}
	}
	else{
		if (k <= n/2)
		{
			/* code */
			cout << 2 * k - 1 <<"\n";
		}
		else{
			cout << 2 * (k - (n/2 + 1)) << "\n" ;
		}
	}
}