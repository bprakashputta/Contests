// For a given N, find the number of ways to choose 
// an integer x from the range [0,2N−1] such that 
// x⊕(x+1)=(x+2)⊕(x+3), 
// where ⊕ denotes the bitwise XOR operator.
// Since the number of valid x can be large, 
// output it modulo 109+7.

// Input
// The first line contains an integer T, the number 
// of test cases. Then the test cases follow.
// The only line of each test case contains a 
// single integer N.

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    long int test;
    cin>>test;
    while(test--){
        long int N;
        long int count=0;
        cin>>N;
        for(long int x=0;x<=pow(2,N-1);x++){
            if((x^(x+1))==((x+2)^(x+3))){
                count++;
            }
        }
        cout << count % (10000000 + 7) <<endl;
    }
}