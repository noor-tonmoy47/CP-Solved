#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int x;
	while(cin >> x){
		v.push_back(x);
		if(v.size() == 1){
			cout << x << endl;
			continue;
		}
		else{
			sort(v.begin(), v.end());
			if(v.size() % 2 != 0){
				
				cout << v[v.size() / 2] << endl;
			}
			else{
				int ans = (v[v.size() / 2] + v[v.size() / 2 - 1]) / 2;
				cout << ans << endl;
			}
		}
	}
}