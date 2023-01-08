#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int min=999;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
sort(arr, arr + n);
bool has;
for (int i = 0; i < n; i++) {
    if(arr[i]>min){
        cout<<arr[i];
        has=true;
        break;}
    else
        has=false;
}
if(has==false)
    cout<<"NO";
}