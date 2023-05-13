#include<iostream>
using namespace std;

void clearithBit(int &n,int i){
        int mask=(~(1<<i));
        n=(n & mask);
}

void updateIthBit(int &n,int i,int v){
        clearithBit(n,i);
        int mask=(v<<i);
        n=n|mask;

}


int main(){
    int n=5;
    int i;
    cin>>i;
    //cout<<getIthBit(n,i)<<endl;
   // setithBit(n,i);
   updateIthBit(n,i,1);
    cout<<n<<endl;

    return 0;
}