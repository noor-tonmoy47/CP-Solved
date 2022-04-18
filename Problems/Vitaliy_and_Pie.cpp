#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,ans = 0;
	string s;
	cin >> n >> s;
	//cout << n << " " << s << endl;
	unordered_map<char, int> m;
	for (int i = 0; i < s.size(); ++i)
	{
		/* code */
		
		if(i == 0 || i % 2 == 0){
			/* code */
			m[s[i]]++;
		}

		else if(!(i % 2 == 0)){
			if(m[tolower(s[i])] > 0){
				m[tolower(s[i])]--;
			}
			else{
				ans++;
			}
		}
		
	}
	cout << ans << endl;	
}