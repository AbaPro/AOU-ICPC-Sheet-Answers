
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],arrsort[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arrsort[i]=arr[i];
        }
        sort(arrsort,arrsort+n);
        if(n==1)cout<<-1<<endl;
        else{
          
            for(int i=0;i<n-1;i++){
                if(arrsort[i]==arr[i])
                swap(arrsort[i],arrsort[i+1]);
            }
            if(arrsort[n-1]==arr[n-1])
              swap(arrsort[n-1],arrsort[n-2]);
       for(int i=0;i<n;i++){
          cout<<arrsort[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
