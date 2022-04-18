#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0;
	for(auto ch: s){
		if(ch == 'A') cnt++;
	}

	if(cnt > (n-cnt)) printf("Anton");

	else if(cnt < (n-cnt)) printf("Danik");

	else printf("Friendship");
	
}