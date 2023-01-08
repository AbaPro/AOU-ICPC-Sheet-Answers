#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int arr[3];
 for(int i=0;i<3;i++){
    cin>>arr[i];
 }
 sort(arr,arr+3);
 cout<<arr[2]<<endl<<arr[0];
    return 0;
}