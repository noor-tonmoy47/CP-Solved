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

    ll n;
    cin >> n;
    
    vector<ll> v(n, 0);
    
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        
        cin >> v[i];
        sum += v[i];
    }


    
    if(sum % 4 == 0)  cout << sum / 4 << "\n";
    
    else cout << sum / 4 + 1 << "\n";

}