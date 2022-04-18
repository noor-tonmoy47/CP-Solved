#include<bits/stdc++.h>
//#def ll long long
using namespace std;

bool equalVec(vector <long long> &v){
	//bool real = true;
	for (int i = 1; i < v.size(); ++i)
	{
		/* code */
		if(v[i-1] != v[i]){
			return false;
		}
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		vector<long long>v(n,0);
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> v[i];
		}

		// for(auto i: v){
		// 	cout << i << endl;
		// }
		// cout << "\n";
		if(equalVec(v)){
			cout << "YES" << "\n";
			continue;
		}
		bool flag = true;
		long long x;
		// for (int i = 0; i <= v.size(); ++i)
		// {
		// 	/* code */
		// 	x = v[0] ^ v[1];
		// 	if(v.size() == 2 and (v[0] != v[1])){
		// 		cout << "NO" << "\n";
		// 		flag = false;
		// 		break;
		// 	}
		// 	v.erase(v.begin() + 0);
		// 	v.insert(v.begin() + 0, x);
		// 	v.erase(v.begin() + 1);
			
		// 	if(equalVec(v)){
		// 		cout << "YES" <<"\n";
		// 		break;
		// 	}
		// }
		// if(flag){
		// 	cout << "Yes" << "\n";
		// }
		//cout << "No" <<"\n";
		while(!equalVec(v)){
			if(v.size() == 2){
				cout << "NO" << "\n";
				flag = false;
				break;
			}
			x = v[0] ^ v[1];
			v.erase(v.begin());
			v.insert(v.begin(), x);
			v.erase(v.begin() + 1);
		}
		if(flag){
			cout << "YES" <<"\n";
		}
	}
}