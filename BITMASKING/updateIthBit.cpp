#include<iostream>
using namespace std;

int getIthBit(int n, int i){
    int mask=(1<<i);

    return (n & mask)>0? 1:0;
}

void setIthBit(int &n,int i){

    int mask=(1<<i);
    n=(n|mask);

}

void clearIthBit(int &n,int i){

    int mask=~(1<<i);
    n=(n&mask);

}

void updateIthBit(int &n,int i,int v){
    clearIthBit(n,i);

    int mask=(v<<i);
    n=n|mask; //sets the rigt value
}

int main(){

    int n=13;
    int i;
    cin>>i;

    //cout<<getIthBit(n,i)<<endl;
   // setIthBit(n,i);
   //clearIthBit(n,i);

   updateIthBit(n,i,1);

    cout<<n<<endl;



    
    return 0;
}