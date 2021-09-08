#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    list<int> l;
    int s;
    
    if(n%2==0){
        s=n/2;
    }else{
       s=(n/2)+1; 
    }
    
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        l.push_back(temp);
    }
    
    while(s>1){
        l.pop_back();
        s--;
    }
    
    cout<<l.back();
}
