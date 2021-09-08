#include<iostream>
using namespace std;

void index(int arr[],int n,int s){
    int i=0,j=1;
    
    int sum = arr[i] + arr[j];
    while(i<n){
        if(sum<s){
            j++;
            sum += arr[j];
        }else if(sum>s){
            sum -= arr[i];
            i++;
        }else{
            cout<<i+1<<" "<<j+1;
            break;
        }
    }
}

int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    index(arr,n,s);
}
