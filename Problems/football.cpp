#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;

	int j = 0, cnt = 0;
	bool danger = false;
	if(s.length() < 7){
		cout << "NO";
	}
	else{
		for (int i = 0; i < s.length() - 6; ++i){
		/* code */
			if(danger){
				break;
			}
		
			if(s[i] == '1'){
				for (j = i+1 ; j < s.length(); ++j){
				/* code */
					if(s[j] == '0'){
						break;
					}
					cnt++;
					if(cnt == 6){
						danger = true;
						break;
					}

				}
			}	
			else{
				for (j = i+1 ; j < s.length(); ++j)
				{
					/* code */
					if(s[j] == '1'){
						break;
					}
					cnt++;
					if(cnt == 6){
						danger = true;
						break;
					}
				}
				
			}
			cnt = 0;
		}
		if(danger){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
	}
}