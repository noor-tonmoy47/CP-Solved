    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
    	ios::sync_with_stdio(0);
    	cin.tie(0);	
    	
    	int n,h,add = 0;
    	cin >> n >> h;
    	int i = n;
    	while(i--){
    		int x;
    		cin >> x;
    		if(x > h) add++;
    	}
    	cout << n + add <<"\n";
    	
    }