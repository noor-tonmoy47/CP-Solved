#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, k;
	cin >> n >> k;
	if(n & 1 == 0){
		if(k > n / 2){
			cout << "NO" <<"\n";
		}
		else cout << "YES" <<"\n";
	}
	else{
		if(k < n / 2 || k == n / 2 + 1){
			cout << "YES" <<"\n";
		}
		else cout << "NO" <<"\n";
	}
	

}