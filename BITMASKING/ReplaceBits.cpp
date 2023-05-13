#include<iostream>
using namespace std;

void clearBitsInRange(int &n,int i,int j){
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;

    int mask=a|b;
    n=n&mask;
}

void ReplaceBits(int &n,int i,int j,int m){
    clearBitsInRange(n,i,j);

    int mask=m<<i;
    n=n|mask;
}

int main(){
    int n=15;
    int i=1,j=3;
    int m=2;

    ReplaceBits(n,i,j,m);
    cout<<n<<endl;



    return 0;
}