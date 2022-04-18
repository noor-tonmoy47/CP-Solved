#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	int t;
	cin >> t;
	int cnt = 0;
	while(t--){
		int x, y;
		cin >> x >> y;

		if(y - x >= 2)	cnt++;
	}
	cout << cnt << "\n";
}