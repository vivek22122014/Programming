#include<iostream>
using namespace std;

void clearLastBits(int &n,int i){
    int mask=((~0)<<i);
    n=n&mask;
}

int main(){
    int n=15;
    int i;
    cin>>i;
   clearLastBits(n,i);

    cout<<n<<endl;

    return 0;
}