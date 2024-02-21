#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
int Fact[1000001];

long long int power(long long int a,long long int n){
	long long int res=1;
	while(n){
		if(n%2==1){
			res=(res*a)%m;
			n--;
		}
		else{
			a=(a*a)%m;
			n=n/2;
		}
	}
	return res%m;
}

long long int  nCr(long long int n,long long int k){
	long long int res=Fact[n];
	res=(res*power(Fact[k],m-2))%m;
	res=(res*power(Fact[n-k],m-2))%m;
	return res%m;
}
int main(){

	Fact[0]=1;
	Fact[1]=1;
	for(int i=2;i<=1000000;i++){
		Fact[i]=(Fact[i-1]*1LL*i)%m;
	}

	long long int  n,k;
	cin>>n>>k;

	cout<<nCr(n,k);



	
}
