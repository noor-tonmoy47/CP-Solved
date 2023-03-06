#include<bits/stdc++.h>
#define ll long long

using namespace std;
const int N = 100;

int record[N / 32];
vector<ll> primes;

bool check(int n, int pos){ 
	return (bool) n & (1 << pos);
}

int setBit(int n, int pos) {
	return  n = n | (1 << pos);
}

void sieve()
{
  
     for( int i = 2; i * i<= N; i += 2 ) 
     {
		 if( check(record[i/32],i%32)==0)
		 {
	 		 for( int j = i*i; j <= N; j += 2*i )
			 {
				 record[j/32]=setBit(record[j/32],j % 32) ;
	 		 }
		 }
	 }
	 puts("2");
	 for(int i=3;i<=N;i+=2)
		 if( check(record[i/32],i%32)==0){
		 	primes.push_back(i);
		 }
	 	 
	 	
}
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int 
	sieve();
	for (int i = 0; i < primes.size(); i += 100)
	{
		/* code */
		cout << primes[i] << "\n";
	}
	//cout << primes.size() <<"\n";
	
}