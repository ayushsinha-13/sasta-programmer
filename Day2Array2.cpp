#include<iostream>
using namespace std;

int find(int arr[],int n,int x){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            sum++;
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int x;cin>>x;
    
    cout<<find(arr,n,x);
}
