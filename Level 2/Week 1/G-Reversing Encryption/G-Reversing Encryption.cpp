#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; string s;
    cin>>n>>s;
    vector<int> ans;
    for (int i = 1; i <= n; i++) if(n%i==0) ans.push_back(i);
    for (int i = 0; i < ans.size(); i++) reverse(s.begin(),s.begin()+ans[i]);
    cout<<s;
}