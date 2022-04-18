#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	int n, temp;
	bool flag = true;
	vector<int> V;
	cin >> n;
	for(int i = 4; i <= n; i++){
		temp = i;
		flag = true;
		while(temp){
			int rem = temp % 10;
			//cout << rem <<"\n";
			if(rem == 7 or rem == 4){
				temp /= 10;
				continue;
			}
			flag = false;
			break;
		}
		if (flag){
			/* code */
			V.push_back(i);
		}
	}
	// for(auto e: V){
	// 	cout << e << " ";
	// }
	flag = false;
	for (auto e: V)
	{
		/* code */
		if(!(n % e)){
			cout << "YES" <<"\n";
			flag = true;
			break;
		}
	}

	if(!flag) cout << "NO" <<"\n";
}