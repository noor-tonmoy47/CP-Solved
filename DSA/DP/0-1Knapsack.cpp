#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll wt[105];
ll val[105];

ll dp[105][105];

ll knapsack(ll n, ll w){
	if(n == 0 || w == 0) return 0;

	//memoization
	if(dp[n][w] != -1) return dp[n][w];

	// যদি থলের capacity থেকে nth item এর ওজন বেশি হয় তাহলে
	//ওইটা নিতে পারবো না। এখন n-1th item বিবেচনা করবো
	if(wt[n-1] > w)	return dp[n][w] = knapsack(n-1, w);

	else
		// দুইটা decision এর max টা নিবো
		return dp[n][w] = max(knapsack(n-1, w), knapsack(n-1, w - wt[n-1]) + val[n-1]);
}


int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n , w;
	cin >> n >> w;


	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> wt[i] >> val[i];
	}

	//memset(dp, -1, sizeof(dp));
	for (int i = 0; i < 105; ++i)
	{
		/* code */
		for (int j = 0; j < 105; ++j)
		{
			/* code */
			dp[i][j] = -1;
		}
	}

	cout << knapsack(n,w);
}