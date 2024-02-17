//Eucledian Algorithms
#include<bits/stdc++.h>
using namespace std;

int find(int a,int b){
	//Calculating the gcd number...
	if(b==0) return a;
	return find(b,a%b);
}

int main(){

	int a,b;
	cin>>a>>b;
	int gcd=find(a,b);
	int lcm=a*b/gcd;

	cout<<gcd<<" "<<lcm<<"\n";

}