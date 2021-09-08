#include<iostream>
#include<list>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    list<int> l;
    int temp;
    
    for(int i=0;i<5;i++){
        cin>>temp;
        l.push_back(temp);
    }
    
    while(n>1){
        l.pop_back();
        n--;
    }
    cout<<l.back();
}
