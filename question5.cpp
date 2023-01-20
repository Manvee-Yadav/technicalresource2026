#include<iostream>
using namespace std;
int main(){
    int n,d;
    d=0;
    cout<<"enter no.";
    cin>>n;
    while(n!=0){
        n=n/10;
        d+=1;
    }
    cout<<d;
    return 0;
}
