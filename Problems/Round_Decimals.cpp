#include<bits/stdc++.h>
using namespace std;

int main(){
		
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	double x;
	int n;

	cin >> x;
	n = x * 10;
	if(n % 10 >= 5){
		cout << (int)x + 1;
	}
	else{
		cout << (int)x;
	}
}