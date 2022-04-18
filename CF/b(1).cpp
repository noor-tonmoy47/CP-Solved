#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool ok(int x, int y){
	int ans = x * x;
	ans += y * y;
	int rt = sqrt(ans);

	return rt * rt == ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	int t, x, y;
	cin >> t;
	while(t--){
		cin >> x >> y;
		if(x == y && y == 0) cout << "0" << endl;
		else if(ok(x, y)) cout << "1" << endl;
		else cout << "2" << endl;
	} 
}