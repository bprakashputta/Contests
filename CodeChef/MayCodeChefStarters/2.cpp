#include<iostream>
#include<string>
#include<vector>
using namespace std;

void correctSentence(){
    int K;
    cin>>K;
    vector<string> s(K);    
    bool l1=false, l2=false;
    for(int i=0; i<K; i++){
        cin>>s[i];
    }
    bool cac=false;
    for(int i=0; i<K; i++){
        string temp = s[i];
        for(int j=0; j<temp.length(); i++){
            if(temp[j]>='a' && temp[j]<='m'){
                l1=true;
            }else if(temp[j]>='N' && temp[j]<='Z'){
                l2=true;
            }
            if(l1&&l2){
                cac = true;
                break;
            }
        }   
        if(cac) break;
    }
    if(cac){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}

int main(){
    int test;
    cin>>test;
    while(test--){
        correctSentence();
    }
return 0;
}