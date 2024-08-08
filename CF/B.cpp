#include<bits/stdc++.h>
#define ll long long
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;


int main(){

    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fast_cin();

    vector<int>test;
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        test.push_back(x);
    }

    int moves= 3;

    sort(test.begin(),test.end());

    // for(auto e: test){
    //     cout << e;
    // }

    
    while(moves--){
        test[test.size() - 1] = test[0];
        cout << "After move: "<< moves <<"\n";
        cout << test[test.size() - 1] << " " << test[0]<<"\n";
        sort(test.begin(), test.end());
    }
    cout << test[test.size() - 1] - test[0];
    
    
    // for(auto e: test){
    //     cout << e;
    // }
}