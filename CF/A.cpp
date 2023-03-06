#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	while(t--){
		char c;
		cin >> c;
		if (c == 'c' || c == 'o' || c == 'd' || c == 'e' ||
			c == 'f' || c == 'r' || c == 's')
		{
			cout << "yes" <<"\n";
		}
		else{
			cout << "no" << "\n";
		}
	}
}