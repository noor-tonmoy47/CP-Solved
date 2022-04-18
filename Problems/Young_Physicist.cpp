#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	int t;
	cin >> t;
	int ansX = 0, ansY = 0, ansZ = 0;
	while(t--){
		int x,y,z;
		cin >> x >> y >>z;
		ansX += x;
		ansY += y;
		ansZ += z;
	}
	if(ansX == ansY and ansY == ansZ and ansY ==0){
		cout << "YES" <<"\n";
	}
	else{
		cout << "NO" <<"\n";
	}
}