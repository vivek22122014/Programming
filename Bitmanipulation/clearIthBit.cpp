#include<iostream>
using namespace std;


void clearithBit(int &n,int i){
        int mask=(~(1<<i));
        n=(n & mask);
}

void setithBit(int &n,int i){
        int mask=(1<<i);
        n=(n|mask);
}

int getIthBit(int n,int i){
    int mask=(1<<i);
    return (n&mask)>0?1:0;
}
int main(){
    int n=5;
    int i;
    cin>>i;
    //cout<<getIthBit(n,i)<<endl;
   // setithBit(n,i);
   clearithBit(n,i);
    cout<<n<<endl;

    return 0;
}