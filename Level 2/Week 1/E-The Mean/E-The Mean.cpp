#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    double h;
    double sum=0;
    for (int i = 0; i < n; i++) {
        cin>>h;
        sum+=h;
    }
    cout<<fixed<<setprecision(6)<<sum/n;
}