#include<iostream>
#include<vector>
using namespace std;

bool stoneGame(vector<int>& piles) {
    int l=0;
    int r = piles.size()-1;
    int alex = 0, lee = 0;
    int count = 0;
    while(l<r){
        if(count%2 == 0){
            if(piles[l] >= piles[r]){
                alex += piles[l];
                l++;
            }else{
                alex += piles[r];
                r--;
            }
            count++;
        }else{
            if(piles[l] >= piles[r]){
                lee += piles[l];
                l++;
            }else{
                lee += piles[r];
                r--;
            } 
            count++;
        }
    }
    if(alex > lee){
        return true;
    }else {
        return false;
    }
}

int main(){
    vector<int> arr(4);
    arr = {3,7,2,3};
    cout<< stoneGame(arr) <<endl;
return 0;
}