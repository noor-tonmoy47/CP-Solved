#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,temp;
	int ara[n+10];
	cin >> n;
	temp = n;
	cout << n <<"\n";
	double orange = 0.0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> ara[i];
		orange += (ara[i] / 100.0);
	}

	cout << orange << "\n";

	
	cout << temp <<"\n";
	cout << orange / n <<"\n";
	
	//cout << setprecision(7) << (orange / n) * 100 <<"\n";
	//cout <<  (orange / n) * 100 <<"\n";

}