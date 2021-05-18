// It's a lockdown. You’re bored in your house and are playing golf 
// in the hallway.
// The hallway has N+2 tiles numbered from 0 to N+1 from left to right. 
// There is a hole on tile number x. You hit the ball standing on tile 
// 0. When you hit the ball, it bounces at lengths of k, i.e. the tiles 
// covered by it are 0,k,2k,…, and so on until the ball passes tile N+1.
// If the ball doesn't enter the hole in the first trial, you try again 
// but this time standing on the tile N+1. When you hit the ball, it 
// bounces at lengths of k, i.e. the tiles covered by it are (N+1),
// (N+1−k),(N+1−2k),…, and so on until the ball passes tile 0.
// Find if the ball will enter the hole, either in its forward journey 
// or backward journey.
// Note: The input and output of this problem are large, so prefer 
// using fast input/output methods.

// Input
// The first line contains an integer T, the number of test cases. Then the test cases follow.
// The only line of each test case contains three integers N,x,k.

#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long int test;
    cin>>test;
    while(test--){
        long int N,x,k;
        cin>>N>>x>>k;
        bool res = false;
        long int i = 0;
        long int j = N+1; 
	if((x%k==0)||((N+1-x)%k==0)){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
return 0;
}
