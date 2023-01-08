#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int lp(int x){
    int i;
    for (i = 1; i < x; i++) cout<<i<<" ";
    return i;
}
int main(){
	fast;
	int n; cin>>n;
    cout<<lp(n)<<endl;
}
