#include <iostream>
using namespace std;
#define ll long
//avengers End Game Problem on HackerBlocks
//Link- https://hack.codingblocks.com/app/practice/5/1264/problem


int main() {

    int tc;
    cin>> tc;
    int primes[]= {2,3,5,7,11,13,17,19};
    while(tc--){
        ll n;
        cin>> n;

        ll sub_sets= (1<<8)-1;
		int ans=0;
        for(ll i=1; i<=sub_sets; ++i){
			ll denom= 1ll;
            ll set_bits= __builtin_popcount(i);
            
            for(ll j=0; j<=7; ++j){
                if(i&(1<<j)){
                    denom= denom*primes[j];
                }
            }
            if(set_bits&1){
                ans= ans+ (n/denom);
            }else{
                ans= ans- (n/denom);
            }
        }

        cout<<ans<<endl;
    }
 
}
