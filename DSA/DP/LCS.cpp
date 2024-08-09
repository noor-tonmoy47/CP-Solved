#include<bits/stdc++.h>
#define ll long long
using namespace std;


int lcs(int i, int j, string *s1, string *s2){
	if(i < 0 || j < 0) return 0;
	if(s1[i] == s2[j]) return 1 + lcs(i-1, j-1, s1,s2);
	else return max(lcs(i, j-1, s1, s2), lcs(i-1, j, s1,s2));
}

int longestCommonSubsequence(string text1, string text2) {
        return lcs(text1.length() - 1, text2.length() - 1, text1, text2);
}
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


}