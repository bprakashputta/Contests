#include<iostream>
using namespace std;

typedef long long ll;

int main(){
    ll test;
    cin>>test;
    while(test--){
        ll k;
        cin>>k;
        ll count=0, num=1;
        while(count<k-1){
            if(count == k-1){
                // if(num%3==0 || num%10==3){
                //     num++;
                // }                
                break;
            }
            if(num%3!=0 || num%10!=3){
                num++;
                count++;
            }else{
                num++;
            }
            // num++;
        }
        if(num%3==0 || num%10==3){
            num++;
        }   
        cout<<num<<endl;
    }
}