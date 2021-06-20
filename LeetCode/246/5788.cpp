#include<iostream>
#include<string>
#include<sstream>
using namespace std;


//This is accepted
//This is the correct solution
string largestOddNumber(string num) {
    string temp = num;
    long len = num.length();
    if(len==1){
        int x = stoi(num);
        if(x%2==1)return num;
        else return "";
    }
    int i = len-1;
    string ans = "";
    while(i >= 0){
        // cout<<str<<endl;
        int x = stoi(to_string(temp[i]))-48;
        // cout<<x<<endl;
        if(x%2 == 1){
            ans = temp.substr(0,i+1);
            cout<<temp.substr(0,i+1)<<endl;
            break;
        }
        i--;
    }
    return ans;
}

int main(){
    string num;
    cin>>num;
    cout<<"Hi"<<endl;
    cout<< largestOddNumber(num)<<endl;
    cout<<"hi"<<endl;
return 0;
}