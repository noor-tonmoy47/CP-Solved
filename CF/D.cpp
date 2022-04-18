#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for (int i = 1; i < s.size(); ++i){
			/* code */
			if(i == 8 and s[i-1] == s[i]){
				if(s[i-1] == 'G' or s[i-1] == 'B'){
					s[i] = 'R';
				}
				else{
					s[i] = 'B';
				}
				continue;
			}
			if(s[i-1] == s[i]){
				if((s[i + 1] == 'G' and s[i] == 'R') or (s[i + 1] == 'R' and s[i] == 'G')){
					s[i] = 'B';
				}
				else if((s[i + 1] == 'G' and s[i] == 'B') or (s[i + 1] == 'G' and s[i] == 'B')){
					s[i] = 'R';
				}
				else if((s[i + 1] == 'B' and s[i] == 'R') or (s[i + 1] == 'R' and s[i] == 'B')){
					s[i] = 'G';
				}
			}
		}
		cout << s << "\n"	;
	}
}