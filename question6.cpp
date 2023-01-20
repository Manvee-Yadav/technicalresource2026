#include<iostream>
using namespace std;
int main(){
    int n,reverse,c;
    reverse=0;
    cout<<"enter no.";
    cin>>n;
    while(n!=0){
        c=n%10;
        n=n/10;
        reverse=reverse*10 + c;
    }
    cout<<reverse;
    return 0;
}
