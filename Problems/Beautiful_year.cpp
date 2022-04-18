#include<bits/stdc++.h>
using namespace std;


int solve(int t){

	stringstream ss;
	ss << t;
	string num;
	ss >> num;

	bool flag = true;
	unordered_map<char, int> m;

	for(char element: num){
		m[element]++;
	}
	for(auto element: m){
		if(element.second > 1){
			flag = false;
		}
	}
	
	if(flag){
		return t;
	}
	else{
		return solve(t+1);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	int t;
	cin >> t;

	cout << solve(t+1) << endl;
	// stringstream ss;
	// ss << t;
	// string num;
	// ss >>	 num;


	// unordered_map<char, int> m;

	// for(char element: num){
	// 	m[element]++;
	// }
	// for(auto element: m){
	// 	if(element.second > 1){
	// 		flag = false;
	// 	}
	// }
}