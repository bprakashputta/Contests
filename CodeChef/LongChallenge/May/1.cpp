// Suppose for a unit rise in temperature, the solubility of sugar in 
// water increases by Bg100 mL.
// Chef does an experiment to check how much sugar (in g) he can 
// dissolve given that he initially has 1 liter of water at X degrees 
// and the solubility of sugar at this temperature is Ag100 mL. Also, 
// Chef doesn't want to lose any water so he can increase the temperature to at most 100 degrees.
// Assuming no loss of water takes place during the process, find the 
// maximum amount of sugar (in g) can be dissolved in 1 liter of water 
// under the given conditions.

// Input
// The first line contains an integer T, the number of test cases. 
// Then the test cases follow.
// The only line of each test case contains three integers X,A,B.

#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int X,A,B;
        cin>>X>>A>>B;
        // with each degree solubility increases by (b/100)gpml
        // Initially we (A/100) gpml at X
        // Max Temperature is 100 *C.
        // solubility units is gpml
        int solubility = A + ((100-X)*B);
        int Sugar = solubility * 10;
        cout<<Sugar<<endl;
    }
return 0;
}
