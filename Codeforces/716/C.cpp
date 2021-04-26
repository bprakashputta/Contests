#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//  Longest subsequence whose product modulo n is equal to 1;
// subsequence means increasing order, doesn't mean continous

void productModulo(vector<int> arr, int n){
    long prod = 1;
    for(int i=0; i< arr.size(); i++){
        prod = prod * arr[i];
        // if()
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        arr[i] = i+1;
    }
    productModulo(arr, n);
return 0;
}