#include<bits/stdc++.h>
using namespace std;

int main(){

	int x = 0;
	int N;
	cin >> N;
    map<string, int> cnt;
    for (int i = 0; i < N; ++i)
    {
    	/* code */
    	string s;
    	cin >> s;
    	cnt[s]++;
    }
    
    for(auto element: cnt){
        if(element.second == 2){
            x++;
        }
    }

    cout << x;
}