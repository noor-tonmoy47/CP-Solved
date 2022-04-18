#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	int a,b,c;
	cin >> a >> b >> c;
	bool flag = false;

	if(c % a == 0 || c % b == 0){
		cout << "Yes" << endl;
	}
	// else if(a > c || b > c){
	// 	cout << "No" << endl;
	// }
	else{
		for (int i = 1; i < c; ++i)
		{
			/* code */
			if((c - i*a) < b){
				break;
			}
			else if((c - i*a) % b == 0){
				flag = true;
				break;
			}
		}
		if(flag){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	// int a = 17 % 19;
	// cout << a << endl;
}