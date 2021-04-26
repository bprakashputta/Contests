#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int x,y,xr,yr,D;
	    cin>>x>>y>>xr>>yr>>D;
	    int food = xr * (D);
	    int water = yr * (D);
	    if( food <= x && water <= y){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
