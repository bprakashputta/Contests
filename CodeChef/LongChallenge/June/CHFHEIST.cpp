//Solution completely not accepted 
//as constraints are exceeding time limit

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int test;
	cin>>test;
	while(test--){
	    long long int D,d,P,Q;
	    cin>>D>>d>>P>>Q;
	    long long int rate=P, amount=0;
	    for(long long int i=0; i<D; i++){
	        amount += P +(i/d)*Q;
	    }
	    cout<<amount<<endl;
	}
	return 0;
}