#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    return a>b;
}
void bubbleSort(int a[],int n){
    for(int times=1;times<=n-1;times++){
        for(int j=0;j<=n-times-1;j++){
            if(compare(a[j],a[j+1])){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={1,-2,4,-5,6,-2,8,10};
    int size=sizeof(arr)/sizeof(int);
    bubbleSort(arr,size);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}