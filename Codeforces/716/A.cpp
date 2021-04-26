#include<iostream> 
#include<vector>
#include<math.h>
#include<climits>
using namespace std;

bool isPerfectSquare(long prod){
    long root = sqrt(prod);
    return root*root == prod;
}

//Optimised technique
bool perfectlyImperfectArray(vector<int> arr){
    long prod=1;
    long max_prod = INT_MIN;
    for(int i=0;i<arr.size();i++){
        // If the array has even a 
        //  single element which is
        // not perfect square
        // then we have got the answer
        if(!isPerfectSquare(arr[i])){
            return true;
        }
    }
    return false;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(perfectlyImperfectArray(arr)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}