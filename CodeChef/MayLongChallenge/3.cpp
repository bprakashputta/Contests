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

#include <bits/stdc++.h>
#include <vector>
using namespace std;

const int MX = 1e5 + 5;
const int MOD = 1e9 + 7;
vector<int> ans(MX);

void preComputation(){
    ans[1] = 1;
    for(int i=2; i<MX; i++){
        ans[i] = (ans[i-1]*2)%MOD;
    }
}

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	preComputation();
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    cout<<ans[n]<<"\n";
	}
	return 0;
}

