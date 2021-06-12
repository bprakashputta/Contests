#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long int sum = 0;
        for(int i=0; i<chalk.size(); i++) sum+=chalk[i];
        k = k%sum;
        int ans = 0;
        for(int i=0; i<chalk.size(); i++){
            if(k< chalk[i]){
                ans = i;
                break;
            }else{
                k = k - chalk[i];
            }
        }
    return ans;
    }
};