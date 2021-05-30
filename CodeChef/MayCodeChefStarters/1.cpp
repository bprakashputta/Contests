#include<iostream>
using namespace std;

void lazyChef(){
    int x,m,d;
    cin>>x>>m>>d;
    if(m*x >= (x+d)){
        cout<<(x+d)<<endl;
    }else{
        cout<<m*x<<endl;
    }
}

int main(){
    int test;
    cin>>test;
    while(test--){
        lazyChef();
    }
return 0;
}