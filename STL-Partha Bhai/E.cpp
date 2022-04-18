#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(cin >> s && s.compare("#")){
		bool flag = false;
		for(int i = 0; i < s.size()-1; i++){
			if(s[i] < s[i+1]){
				char temp = s[i];
				s[i] = s[i+1];
				s[i+1] = temp;
				flag = true;
				break;
			}
		}
		if(flag){
			cout << s << endl;
		}
		else{
			cout << "No Successor" << endl;
		}
	}
}