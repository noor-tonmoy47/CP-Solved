#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0, sum = 0;
		cin >> n;
		vector <int> v;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			int input;
			cin >> input;
			v.push_back(input);
		}
		for (int i = 1; i < n; ++i)
		{
			/* code */
			for (int j = i-1; j >= 0; j--)
			{
				/* code */
				if(v[i] >= v[j]){
					cnt++;
				}
			}
			sum += cnt;
			cnt = 0;
		}

		cout << sum << endl;

	}
}