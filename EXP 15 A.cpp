#include<iostream>
using namespace std;
 //creating function
 int fact(int n){
    if(n<=1){
        return 1;

    }
    else{
        return(n*fact(n-1));

    }
 }
 int main(){
    int X,n;
    cout<<"enter a number: ";
    cin>>n;
     X= fact(n);
     cout<<n<<"!="<<X;
     return 0;
 }