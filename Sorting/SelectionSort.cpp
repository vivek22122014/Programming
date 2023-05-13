#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int a[],int n){
    for(int pos=0;pos<=n-2;pos++){
       int current=a[pos];
       int min_pos=pos;
       //find out the element
       for(int j=pos;j<n;j++){
        if(a[j]<a[min_pos]){
            min_pos=j;
        }
       }
       //swap outside the loop
       swap(a[pos],a[min_pos]);
    }
}
int main(){
    int arr[]={1,-2,4,-5,6,-2,8,10};
    int size=sizeof(arr)/sizeof(int);
    SelectionSort(arr,size);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}