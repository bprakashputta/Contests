#include<iostream>
#include<vector>
using namespace std;

int days(int per, int p){
    return (per/p) + (per%p != 0);
}

int main(){
    int test;
    cin>>test;
    while(test--){
        int G, P, X[10];
        cin>>G>>P;
        for(int i=0; i<10; i++){
            cin>>X[i];
        }
        int pers = 0;
        for(int i=G;i<10;i++){
            pers+=X[i];
        }
        int minD = days(pers+1, P);
        int maxD = days(pers+X[G-1], P);
        cout<<minD<<" "<<maxD<<endl;
    }
}