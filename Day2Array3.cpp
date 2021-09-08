#include<bits/stdc++.h>
using namespace std;

void calc(int arr[],int n){
    int lower = INT_MAX;
    int upper = INT_MIN;
    for(int i=0;i<n;i++){
        lower = min(arr[i],lower);
        upper = max(arr[i],upper);
    }
    
    cout<<"min = "<<lower<<", max = "<<upper;
}

int main(){
    int n;cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    calc(arr,n);
}
