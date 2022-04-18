#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		// vector<int> v1 = {0};
		// vector < int> v2 = {0};
		if(s.length() == 2  && s[0] != s[1]){
			cout << "NO" <<endl;
		}
		else if((s.length() == 3 ) && (s[0] != s[1] || s[0] != s[2])){
			cout << "NO" <<endl;
		}

		else{
			cout << "YES" <<endl;
		}


		// for (int i = 0; i < s.length(); ++i)
		// {
		// 	/* code */
		// 	if(s[i] == 'E'){
		// 		int temp = v.pop_back();
		// 		v.push_back(temp);
		// 	}
		// 	else{
		// 		int temp = v.pop_back();
		// 		v.push_back(temp+10);
		// 	}
		// }
	}
}