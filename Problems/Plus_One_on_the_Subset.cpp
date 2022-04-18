#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		vector<int>v;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			int input;
			cin >> input;
			v.push_back(input);
		}
		sort(v.begin(), v.end());
		cout << v[n-1] - v[0] << endl;
	}
}