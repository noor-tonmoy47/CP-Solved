#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	//int x = 1;
	for (int i = 1; i <= t; ++i)
	{
		/* code */
		long long w,n,m;
		cin >> w;
		if(!(w & 1)){
			n = w;
			m = 1;
			while(!(n & 1)){
				n >>= 1;
				m <<= 1;
			}
			cout <<"Case " << i <<": "<< n << " " << m <<"\n";
		}
		else{
			cout <<"Case " << i <<": "<< "Impossible" <<"\n";
		}
	}
}