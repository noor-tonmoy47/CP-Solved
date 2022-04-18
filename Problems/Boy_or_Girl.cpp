#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	string res = "";
	bool seenBefore = false;
	for (int i = 0; i < s.length(); ++i)
	{
		/* code */
		if(res.find(s[i]) == string::npos){
			res.push_back(s[i]);
		}
	}
	//cout << res.length() << endl;
	if(res.length() % 2 == 0){
		cout << "CHAT WITH HER!";
	}
	else{
		cout << "IGNORE HIM!";
	}
	//cout << res;
}