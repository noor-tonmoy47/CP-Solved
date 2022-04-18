#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	string s,t;
	cin >> s >> t;

	string res;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		/* code */
		res.push_back(s[i]);
	}
	if(!(res.compare(t))) printf("YES");
	
	else printf("NO");
}