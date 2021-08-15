#include <iostream>
using namespace std;

typedef long long int ll;

int main() {
	// your code goes here
	ll test;
	cin>>test;
	while(test--){
	    ll A[10];
	    int sc1=0, sc2=0;
	    for(int i=0; i<10; i++){
	        cin>>A[i];
	        if(i%2==1){
	            if(A[i]==1){
	                sc2++;
	            }
	        }else{
	            if(A[i] == 1){
	                sc1++;
	            }
	        }
	    }
	    if(sc1==sc2){
	        cout<<0<<endl;
	    }else if(sc1>sc2){
	        cout<<1<<endl;
	    }else{
	        cout<<2<<endl;
	    }
	}
	return 0;
}
