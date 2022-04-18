#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v;
		double sum = 0;
		double cnt = 0;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			int input;
			cin >> input;
			v.push_back(input);
			sum += input;
		}
		double avg = sum / n;
		//cout << avg << endl;
		for(auto element: v){
			double res = element * 1.0; 
			if(res > avg){
				cnt++;
			}
		}
		//cout << cnt << endl;
		double percent = (cnt / n ) * 100;
		//cout << setprecision(5) << percent << endl;
		//cout << percent << endl;
		printf("%.3f", percent);
		cout << "%" << endl;
	}
}