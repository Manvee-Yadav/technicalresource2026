#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks\n";
    cin>>marks;

    if(marks>90){
        cout<<"excellent";
    }
    else if(marks>80 && marks<=90){
        cout<<"good\n";
    }
    else if(marks>70 && marks<=80){
        cout<<"fair\n";
    }
    else if(marks>60 && marks<=70){
        cout<<"meet expectation\n";
    }
    else{
        cout<<"below par";
    }
    


    return 0;
}
