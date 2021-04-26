#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

long numberOfPairs(vector<int> arr, int n,int k){

}

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        int k;
        cin >> n >> k;
        vector<int> arr(pow(2,k-1));
        for(long i=0; i< pow(2,k-1)+1; i++){
            arr[i] = i;
        }
        cout << numberOfPairs(arr, n, k)<<endl;
    }
}