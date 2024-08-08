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

    ll t;
    cin >> t;
    while (t--){
        int n, m;
        int res = 0;
        cin >> n >> m;

        string s;
        cin >> s;
        unordered_map<char, int> mp;

        mp['A'] = 0;
        mp['B'] = 0;
        mp['C'] = 0;
        mp['D'] = 0;
        mp['E'] = 0;
        mp['F'] = 0;
        mp['G'] = 0;
        
       
        for(int i = 0 ; i<s.length(); i++){
            mp[s[i]]++;
        }

        for(auto e: mp){
            if(e.second == 0){
                
                res += m; 
                continue;
            }   
            if(e.second < m){
                res += m - e.second;
            }
        }
        cout << res << "\n";
    }
}