#include<iostream>
#include<vector>
using namespace std;

// Failed to optimise the solution
// Time complexity O(n x m)
// have to optimise the code

bool isordinary(int n){
    int temp = n%10;
    n = n/10;
    bool res = true;
    if(n == 0){
        return true;
    }else{
        while(n>0){
            int rem = n %10;
            if(rem != temp){
                res = false;
                break;
            }
            n = n/10; 
        }
    }
    return res;
}

int ordinaryN(int n){
    int count = 0;
    for(int i=1;i<=n;i++){
        if(isordinary(i)){
            count++;
        }
    }
    return count;
}


int ordinaryNOptimised(int n){
    return n;
}


int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        cout<<ordinaryN(n)<<endl;
    }
return 0;
}