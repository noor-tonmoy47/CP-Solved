#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		int n,b,r;
		string s;
		cin >> n >> r >> b;
		if(b > 1){
			int division = r  / b + 1;
			for (int i = 0; i < n; ++i)
			{
				/* code */
				s.push_back('R');
			}

			for (int i = 0; i < b; ++i)
			{
				/* code */
				for (int j = 1; j < n; j+= division){
					/* code */
					s[j] = 'B';
				}
			}
			
			cout << s << "\n";
		}
		else{
			for (int i = 0; i < n; ++i)
			{
				/* code */
				
				if(i == r/2 ){
					s.push_back('B');
					continue;
				}
				s.push_back('R');
			}
			cout << s <<"\n";
		}

	}
}