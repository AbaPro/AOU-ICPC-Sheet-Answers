#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
       string s;
       bool f=true;
       cin>>s;
       if(s.size()%2!=0)cout<<"NO";
       else{
           for(int l=0,r=s.size()/2;l<s.size()/2;l++,r++){
               if(s[l]!=s[r]){
                   f=false;
                   break;
               }
           }
        if(f)cout<<"YES";
       else cout<<"NO";
      
       }
        cout<<endl;
    }
    return 0;
}
