#include<iostream>
#include<vector>
using namespace std;

void titForTat(vector<int> arr,int n,int k){
    //Given an Array arr
    //n size of array
    //k number of operations 
    //at most can be performed on arr
    //of the following type
    //one number +1 and another number -1
    //
}

int main(){
    int test;
    cin>> test;
    while(test--){
        int n,k;
        cin>> n >> k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i]; 
        }
        titForTat(arr,n,k);
    }
}