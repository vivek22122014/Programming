#include<iostream>
using namespace std;

int convertToBinary(int n){
    int ans=0;
    int p=1;
    while(n>0){
        int last_bit=(n&1);
        ans+=p*last_bit;
        p*=10;
        n=n>>1;
    }
    return ans;
}
int main(){

    cout<<convertToBinary(10)<<endl;
    int x=~10;
    cout<<x<<endl;
     cout<<convertToBinary(x)<<endl;


    return 0;
}