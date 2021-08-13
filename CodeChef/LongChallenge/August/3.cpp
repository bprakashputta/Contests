#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int N=0,p=0,K=0;
	    cin>>N>>p>>K;
	    int i=0, j=0;
	    int days = 1;
	    bool res = true;
        // while(res){
        //     if(i==p){
        //         break;
        //     }
        //     i += K;
        //     days++;
        //     if(i>N-1){
        //         j++;
        //         i=j;
        //     }
	    // }
        if(p==0){
            cout<<days<<endl;
            return 0;
        }
        for(int i=0; i<p; i++){
            if(p<K){
                days += (N)/(K);
            }else{
                if(p%(i+K)==0){
                    days += p/(i+K);
                    break;
                }else{
                    days += (N)/(K);
                }
            }
        }
	    cout<<days<<endl;
	}
	return 0;
}
