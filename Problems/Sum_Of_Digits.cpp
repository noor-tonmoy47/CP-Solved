#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

int sumOfDigits(string &s){
	int sum = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		/* code */
		sum += s[i] - '0';
	}
	string sumN = to_string(sum);
	cnt++;
	if (sumN.size() == 1)
	{
		/* code */
		return cnt;
	}
	else{
		return sumOfDigits(sumN);
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	string t;
	cin >> t;
	if(t.size() == 1){
		cout << 0 << endl;
		return 0;
	}
	cout <<sumOfDigits(t) << endl;
	
	
	
}