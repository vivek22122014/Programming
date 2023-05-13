#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int a[],int n){
    for(int i=1;i<=n-1;i++){
        int current=a[i];
        int prev=i-1;

        while(prev>=0 and a[prev]>current){
            a[prev+1]=a[prev];
            prev=prev-1;
        }
        a[prev+1]=current;
    }
}
int main(){
    int arr[]={1,-2,4,-5,6,-2,8,10};
    int size=sizeof(arr)/sizeof(int);
    InsertionSort(arr,size);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}