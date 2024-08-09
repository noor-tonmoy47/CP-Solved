#include<bits/stdc++.h>
#define ll long long
const ll N = 1e5 + 10;
using namespace std;

ll h[N];
ll dp[N];
ll minCost(ll n){
	if (n <= 0) return 0;
	if(dp[n] != -1) return dp[n]; 	
	if(n == 1) return dp[n] = abs(h[n-1] - h[n]) + minCost(n-1);
	else
		return dp[n] = min(abs(h[n-1] - h[n]) + minCost(n-1), abs(h[n-2] - h[n]) + minCost(n-2)); 
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	memset(dp, -1, sizeof(dp));
	ll n;
	cin >> n ;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> h[i];
	}
	//cout << "\n";
	cout << minCost(n-1);
	// for (int i = 0; i < n; ++i)
	// {
	// 	/* code */
	// 	cout << h[i] <<"\n";
	// }
	
}