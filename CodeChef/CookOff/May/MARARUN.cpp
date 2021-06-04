#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int D,d,A,B,C;
	    cin>>D>>d>>A>>B>>C;
	    int dis = d*D;
	    if(dis<10){
	        cout<<endl<<0;
	    } else if(dis>=10 && dis<21){
	        cout<<endl<<A;
	    } else if(dis>=21 && dis<42){
	        cout<<endl<<B;
	    } else{
	        cout<<endl<<C;
	    }
	}
	return 0;
}
