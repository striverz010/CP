#include<bits/stdc++.h>
using namespace std;

//-->2^13

//2^2*6 -->4^6

int BF(int a,int n){
	int res=1;
	while(n){
		if(n%2){
			n--;
			res=res*a;
		}
		else{
			n=n/2;
			a=a*a;
		}


	}
	return res;
}

int main(){

	int base,power;
	cin>>base>>power;

	cout<<BF(base,power);
}