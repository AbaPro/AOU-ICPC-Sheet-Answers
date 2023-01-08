#include <bits/stdc++.h>
#define ll long long
#define fr first
#define sc second
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
	int n=4,j=0;
    int arr[n],max1=0,max2=0;
    int max1i=0,max2i=0;
    for(auto & i:arr){
        cin>>i;
        if(i>max1) {max1=i; max1i=j;} 
        j++;
    } 
    j=0;
    for(auto i:arr){
         if(i>max2 && i <max1) {max2=i; max2i=j;}
        j++;
    } 
    if((max1i >1 && max2i>1) || (max1i<2 &&max2i<2)) cout<<"NO";
    else cout <<"YES";    
 
}
int main(){
//	freopen("collisions.in", "r", stdin);
	fastio();
	int t; cin>>t; 
	while (t--){
        solve();
        cout<<'\n';
	}	  
}
//Polaris