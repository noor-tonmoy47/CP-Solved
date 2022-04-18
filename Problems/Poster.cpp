#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k, cnt;
	cin >> n >>k;
	//cin.ignore(0);
	string slogan;
	cin >> slogan;
	//cout << slogan;
	if(k == 1){
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cout << "PRINT " << slogan[i] <<"\n";
			if(i == n-1){
				break;
			}
			cout << "RIGHT" << "\n";
		}
	}
	else if(k == n){
		
		for (int i = n-1; i >= 0; --i)
		{
			/* code */
			cout << "PRINT " << slogan[i] <<"\n";
			if(i == 0){
				break;
			}
			cout << "LEFT" << "\n";
		}
	}

	else if(k <= n/2){
		/* code */
		//cnt = n - k;
		for (int i = 1; i < k; ++i)
		{
			/* code */
			cout << "LEFT" << "\n";
		}
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cout << "PRINT " << slogan[i] <<"\n";
			if(i == n-1){
				break;
			}
			cout << "RIGHT" << "\n";
		}
	}
	else{
		cnt = n - k;
		for (int i = 0; i < cnt; ++i)
		{
			/* code */
			cout << "RIGHT" << "\n";
		}

		for (int i = n-1; i >= 0; --i)
		{
			/* code */
			cout << "PRINT " << slogan[i] <<"\n";
			if(i == 0){
				break;
			}
			cout << "LEFT" << "\n";
		}

	}
}