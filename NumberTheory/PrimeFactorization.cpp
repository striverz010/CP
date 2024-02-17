#include<bits/stdc++.h>
using namespace std;

int N=1000000;
int spf[1000001];
void CreateSieve(){

	for(int i=1;i<=N;i++){
		spf[i]=i;
	}

	for(int i=2;i<=N;i++){
		if(spf[i]==i){
			for(int j=i*i;j<=N;j+=i){
				if(spf[j]==j){
					spf[j]=i;
				}

			}
		}
	}
}

int main(){
	CreateSieve();
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;

		while(n!=1){
			cout<<spf[n]<<" ";
			n=spf[n]/n;
		}
		cout<<"\n";
	}

}