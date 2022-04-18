#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,cnt =0;
	cin >> t;
	vector<string> v;
	string ara[t+10];
	for (int i = 0; i < t; ++i)
	{
		/* code */
		string s;
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end());
	for (int i = 1; i < t; ++i)
	{
		/* code */
		if(v[i-1] == v[i]){
			continue;
		}
		cnt++;

	}
	cout << cnt << endl;
}