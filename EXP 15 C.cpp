#include<iostream>
#include<string.h>
using namespace std;
//creating a function
void reverse(char *str){
    if (*str) // base condition
    {
        reverse(str+1); //recursion
        cout<<("%c", *str);

    }
}
int main(){
    char a[50];
    cout<<"enter a string: ";
    cin>>a;
    reverse(a); //function calling
    return 0;
}