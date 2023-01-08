#include <iostream>
#include <vector> 
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
     vector <int> vec;
     int mx=0,mn=0;
        int n,cont=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int l;
            cin>>l;
            vec.push_back(l);
        }
        for(int i=1;i<n;i++){
           mx=max(vec[i],vec[i-1]);
           mn=min(vec[i],vec[i-1]);
           while(mn*2<mx){
               mn*=2;
               cont++;
           }
        }
        cout<<cont<<endl;
    }
    

    return 0;
}