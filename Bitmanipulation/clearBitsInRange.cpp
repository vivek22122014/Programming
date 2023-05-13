#include<iostream>
using namespace std;

void clearBitsInRange(int &n,int i,int j){
    int a=((~0)<<j+1);
    int b=(~((~0)<<i));
    

    int mask=a|b;
    n=n&mask;
}

int main(){
    int n=31;
    int i,j;
    cin>>i>>j;
   clearBitsInRange(n,i,j);

    cout<<n<<endl;

    return 0;
}

//32 16 8 4 2 1
//0  1  1 1 1 1 ->31