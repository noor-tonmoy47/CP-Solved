#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int> v;
	int N,x;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		/* code */
		int in;
		cin >> in;
		v.push_back(in);
	}
	
	cin >> x;

	map<int, int> cnt;

	for(auto element: v){
		cnt[element]++;
	}

	cout << cnt[x];
}