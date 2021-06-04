#include<iostream>
#include<vector>
using namespace std;


//I have to write code for optimised approach
int findPairs(vector<int> arr, int x, int y){
    int count=0, n=arr.size();
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            int res = arr[i]*arr[j];
            if(res >=x && res<=y){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int x,y;
    cin>>x>>y;
    findPairs(arr,x,y);
}