//Write a function to check if a number is odd or even!

#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x&1){
        cout<<"odd\n";
    }
    else{
        cout<<"even\n";
    }
    return 0;
}