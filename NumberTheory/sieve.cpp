#include<bits/stdc++.h>
using namespace std;

int N=1e6;
bool Sieve[1000001];

void CreateSieve(){
	for(int i=2;i<=N;i++){
		Sieve[i]=true;
	}

	for(int i=2;i*i<=N;i++){
		if(Sieve[i]==true){
			for(int j=i*i;j<=N;j+=i){
				Sieve[j]=false;

			}
		}
	}

}
int main(){
	CreateSieve();
	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		if(Sieve[n]==true) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}

//TimeComplexity:O(N log(log n))

