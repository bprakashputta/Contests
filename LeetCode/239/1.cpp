// 5746. Minimum Distance to the Target Element
#include<iostream>
#include<vector>
using namespace std;

int getMinDistance(vector<int>& nums, int target, int start){
    int minim = INT_MAX;
    for(int i=0;i<nums.size(); i++){
        if(nums[i] == target){
            int val = abs(i - start);
            if(minim > val){
                minim = val;
            }
        }
    }
    return minim;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int target, start;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< getMinDistance(arr, target, start)<<endl;
return 0;
}