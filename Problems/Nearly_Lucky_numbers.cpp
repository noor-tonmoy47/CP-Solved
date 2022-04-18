#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	ll n;
	cin >> n;
	int cnt = 0;
	while(n){
		int rem = n % 10;
		if(rem == 4 or rem == 7) cnt++;
		n /= 10;
	}
	if(cnt == 4 or cnt == 7) cout << "YES" << "\n";

	else cout << "NO" <<"\n";
	
}