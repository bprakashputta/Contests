#include<iostream>
#include<vector>
using namespace std;

vector<long long int> arr(1000000000);

int Cuckoo_Sequence(int n){
    if(arr[n-1] != 0){
        return arr[n];
    }else{
        arr[0] = 0;
        arr[1] = 1;
        for(int i=2; i<n; i++){
            arr[i] = 1* arr[i-1] + 2*arr[i-2];
        }
    }
    return arr[n-1];
}

int Cuckoo_Sequence(int n){

    int f[n + 2];
    int i;
 
    // 0th and 1st number of the
    // series are 0 and 1
    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
         
       //Add the previous 2 numbers
       // in the series and store it
       f[i] = 1*f[i - 1] + 2*f[i - 2];
    }
    return f[n];
}

int Cuckoo_Sequence(int n)
{
    int a = 0, b = 1, c, i;
    if( n == 0)
        return a;
    for(i = 2; i <= n; i++)
    {
       c = 1*a + 2*b;
       a = b;
       b = c;
    }
    return b;
}


int main(){
    int n;
    cin>>n;
    cout<<Cuckoo_Sequence(n);
return 0;
}