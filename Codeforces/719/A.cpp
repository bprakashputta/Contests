#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

bool Polycarp(string str){
    int n = str.length();
    char s = str[0];
    map<char,int> m ;
    m[s]++;
    for(int i=1;i<n; i++){
        if(s!=str[i]){
            m[str[i]]++;
            s = str[i];
        }
    }

    bool res = true;
    for(int i=0;i<n;i++){
        if(m[str[i]] > 1){
            res = false;;
        }
    }
    return res;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        if(Polycarp(str)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}