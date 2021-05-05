#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int r,b,d;
        cin>> r>> b>> d;
        if(d==0){
            if(r == b){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        } else{
            if(r == 1){
                if(b-r <= d){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else if(b == 1){
                if(r-b <= d){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                if(abs(r-b) <= d){
                    cout<<"YES"<<endl;
                }else{
                    int r1 = r/2;
                    int r2 = r - r1;
                    int b1 = b/2;
                    int b2 = b - b1;
                    if(abs(r1-b1) <= d && abs(r2-b2) <= d){
                        cout<<"YES"<<endl;
                    }else{
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
    }
return 0;
}