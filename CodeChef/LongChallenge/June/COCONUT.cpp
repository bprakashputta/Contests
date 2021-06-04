#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int test;
	cin>>test;
	while(test--){
	    long int xa,xb,Xa,Xb;
	    cin>>xa>>xb>>Xa>>Xb;
	    cout<<(Xa/xa)+(Xb/xb)<<endl;
	}
	return 0;
}

