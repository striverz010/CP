#include<bits/stdc++.h>
using namespace std;

//Fermat's little theorem for finding the modulo inverse very effectively..

int power(int a,int n,int p){
	int res=1;
	while(n){
		if(n%2){
			res=((res%p)*(a%p))%p;
			n--;
		}
		else{
			a=((a%p)*(a%p))%p;
			n=n/2;
		}
	}
	return res;
}

int main(){

	int q,a,m;
	cin>>q;
	while(q--){
		cin>>a>>m;

		cout<<"modulo inverse is: "<<power(a,m-2,m)<<"\n";
	}
}
