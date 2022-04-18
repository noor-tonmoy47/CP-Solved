#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	int n,t;
	cin >> n >> t;
	string s;
	cin >> s;
	int sec = 0;
	while(sec < t)
	{
		/* code */
		
		for (int j = 1; j < n; ++j)
		{
			/* code */
			if(s[j-1] == 'B' and s[j] == 'G'){
				s[j-1] ^= s[j];
				s[j] ^= s[j-1];
				s[j-1] ^= s[j];
				j++;
			}
		}
		sec++;
	}
	cout << s << "\n";
}