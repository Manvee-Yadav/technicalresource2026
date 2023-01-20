#include<iostream>
using namespace std;
int main(){
   int t,n;
   cout<<"enter no. of time test to be done";
   cin>>t;
   for(int i=1;i<=t;i++){
    cout<<"enter no.";
    cin>>n;
    if(n==0 || n==1){
        cout<<"not prime\n";
    }
    else if(i==2 || i==3){
        cout<<"prime\n";
    }
    else{

    for(int j=2;j<=n/2;j++){
        if(n%j==0){
            cout<<"not prime\n";
            break;
        }
        else{
            cout<<"prime\n";
        }
    }
    }
   }
    


    return 0;
}
