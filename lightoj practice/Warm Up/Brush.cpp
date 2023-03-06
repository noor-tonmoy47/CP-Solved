#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		/* code */
		int n;
		cin >> n;
		vector<int> V(n, 0);
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> V[i];
			if(V[i] < 0) continue;
			sum += V[i];
		}
		cout<< "Case "<< i<<": " << sum << "\n";
	}
}