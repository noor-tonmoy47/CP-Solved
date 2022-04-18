#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	while(true){
		int a,b;
		cin >> a >> b;
		if(a == 0 && b == 0){
			break;
		}
		else{
			map< ll, int> m;
			//vector<ll> v;
			int cnt = 0;
			for (int i = 0; i < a+b; ++i)
			{
				/* code */
				ll x;
				cin >> x;
				//v.push_back(x);
				m[x]++;
			}
			for(auto element: m){
				if(element.second == 2){
					cnt++;
				}
			}
			cout << cnt <<endl;
		}
	}
}