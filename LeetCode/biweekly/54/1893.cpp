#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        bool max_res = true;
        for(int i=left; i<=right; i++){
            int x = i;
            bool res = false;
            for(int j=0; j<ranges.size(); j++){
                if(x>=ranges[j][0] && x<=ranges[j][1]){
                    res = true;
                    break;
                }
            }
            if(res == false){
                max_res = false;
                break;
            }else{
                max_res = true;
            }
        } 
    return max_res;
    }
};