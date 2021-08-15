#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
	// your code goes here
	ll test;
	cin>>test;
	while(test--){
	    ll N, M, X;
	    cin >> N >> M >> X;
	    vector<ll> plr(N);
	    vector<ll> ans(X);
	    ll j=0;
	    for(ll i=0; i<N; i++){
            cin>>plr[i];
	    }
	    
	    
	    
	    //Step 1
	    for(ll i=0; i<N; i++){
	       // cin>>plr[i];
	        if(plr[i] >= M){
	            ans.push_back(i+1);
	            plr[i] = 0;
	            j++;
	        }
	    }
	    
	    
	    //Step2
        while(j<X){
            int maxIndex = max_element(plr.begin(), plr.end())-plr.begin();
            ans.push_back(maxIndex+1);
            plr[maxIndex] = 0;
            j++;
        }
	    
	    sort(ans.begin(), ans.end());
	    ans.erase(remove(ans.begin(), ans.end(), 0), ans.end());
	    ll k = ans.size();
	    cout<<k<<" ";
	    for(ll i=0; i<k; i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
