#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll inp[10];
	ll ans[10];
	ll max = 0;
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		cin >> inp[i];
		if (i == 0)
		{
			/* code */
			max = inp[i];
			continue;
		}
		if(inp[i] > max){
			max = inp[i];
		}
	}

	ll cnt[max+1];
	for (int i = 0; i <= max; ++i)
	{
		/* code */
		cnt[i] = 0;
	}

	for (int i = 0; i < 10; ++i)
	{
		/* code */
		cnt[inp[i]]++;
	}

	for (int i = 1; i <= max; ++i)
	{
		/* code */
		cnt[i] += cnt[i-1];
	}

	for (int i = 9; i >= 0; --i)
	{
		/* code */
		cnt[inp[i]]--;
		ans[cnt[inp[i]]] = inp[i];
	}

	for (int i = 0; i < 10; ++i)
	{
		/* code */
		cout << ans[i] << "\n";
	}
}