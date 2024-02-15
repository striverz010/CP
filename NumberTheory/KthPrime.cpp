#include<bits/stdc++.h>
using namespace std;


int N=86028121;
bool sieve[86028122];
vector<int>ds;
void CreateSieve(){
	for(int i=2;i<=N;i++){
	    sieve[i]=true;
    }

    for(int i=2;i*i<=N;i++){
    	if(sieve[i]==true){
    		for(int j=i*i;j<=N;j+=i){
    			sieve[j]=false;
    		}
    	}
    }

    //for finding the actual size //86028121
    // int cnt=0;
    // int limit=5*1000000;
    // int size=1;
    // for(int i=2;i<=N;i++){
    // 	if(sieve[i]==true){
    // 		cnt++;
    // 	}
    // 	if(cnt==limit){
    // 		size=i;
    // 		break;
    // 	}
    // }

    for(int i=2;i<=N;i++){
    	if(sieve[i]==true){
    		ds.emplace_back(i);
    	}
    }

}


int main(){
	
	CreateSieve();
	int q;
	cin>>q;
	while(q--){
		int k;
		cin>>k;
		cout<<ds[k-1]<<"\n";
	}
}

