#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int N,M;
	    cin>>N>>M;
	    int X,Y;
	    cin>>X>>Y;
	    vector<vector<char>> arr(N); 
	    for(int i=0;i<N;i++){
	        arr[i] = vector<char>(M);
	        for(int j=0;j<M;j++){
	            cin>>arr[i][j];
	        }
	    }
	    
	    int scoreF = 0, scoreP = 0;
	    for(int i=0;i<N;i++){
	        for(int j=0;j<M;j++){
	            if(arr[i][j] == 'F'){
	                scoreF += 1;
	            }else if(arr[i][j] == 'P'){
	                scoreP += 1;
	            }else{
	                continue;
	            }
	        }
    	    if(scoreF >= X || (scoreF == X-1 && scoreP >= Y) )
    	    {
    	        cout<<"1";    
    	    }else{
    	        cout<<"0";
    	    }
            scoreF = 0;
            scoreP = 0;
	    }
	    cout<<endl;
	}
	return 0;
}
