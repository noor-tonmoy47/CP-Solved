#include<bits/stdc++.h>

using namespace std;

int romanToInt(string s) {
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        vector<int> arr;        
        int i = 0;
        
        for(char element: s){
             arr.push_back(mp[element]);
        }
        
        for(auto e: arr){
            cout << e << "\n";
        }
    //     int res = 0;
    //     for (int i = 0; i < arr.size() ; i++)
    //     {
    //         /* code */
    //         if(arr[i] < arr[i+1]){
    //             res += arr[i+1] - arr[i];
    //         }
    //         else{
    //             res += arr[i+1] + arr[i];

    //         }

    //     }
        
    return 1;

}

int main(){
    // cout << romanToInt("III");
    romanToInt("III");
}