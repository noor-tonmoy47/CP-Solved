#include<bits/stdc++.h>
#define pi 3.1416
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		/* code */
		double r;
		cin >> r;
		double a = r * 2;
		double wholeArea = a * a;
		double circleArea = pi * r * r;
		double ans = wholeArea - circleArea;
		ans = round(ans * 1000.0) / 1000.0
		//printf("%.6f\n", ans);
		cout << ans << "\n";
	}
}