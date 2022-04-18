    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);	
    	
    	int t;
    	int cur = 0, cap = 0;
     
    	cin >> t;
    	while(t--){
    		int a,b;
    				cin >> a >> b;
    		if (a>=b){
    			/* code */
    			cur -= a - b;
    			cap = max(cur,cap);
    		}
    		else{
    			cur += b-a;
    			cap = max(cur,cap);
    		}	
    	}
    	cout << cap <<"\n";
    }