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


// void fastscan(long int &number)
// {
//     //variable to indicate sign of input number
//     bool negative = false;
//     register int c;
  
//     number = 0;
  
//     // extract current character from buffer
//     c = getchar();
//     if (c=='-')
//     {
//         // number is negative
//         negative = true;
  
//         // extract the next character from the buffer
//         c = getchar();
//     }
  
//     // Keep on extracting characters if they are integers
//     // i.e ASCII Value lies from '0'(48) to '9' (57)
//     for (; (c>47 && c<58); c=getchar())
//         number = number *10 + c - 48;
  
//     // if scanned input has a negative sign, negate the
//     // value of the input number
//     if (negative)
//         number *= -1;
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int test;
    cin>>test;
    // scanf("%d",&test);
    // fastscan(test);
    while(test--){
        long int N,x,k;
        cin>>N>>x>>k;
        // scanf("%ld%ld%ld",&N,&x,&k);
        // fastscan(N);
        // fastscan(x);
        // fastscan(k);
        bool res = false;
        long int i = 0;
        long int j = N+1; 
        
        while(i <= N+1 || j >= 0){
            if(i <= N+1){
                if(i == x){
                    res = true;
                    goto yes;
                }
                i += k;
            }

            if(j >= 0){
                if( j == x){
                    res = true;
                    goto yes;
                }
                j -= k;
            }
        }

yes:    if(res){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}