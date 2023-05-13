#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& a,int s,int e){
    int pivot=a[e];
    int i=s-1;
    for(int j=s;j<e;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}
void quickSort(vector<int>& a,int s,int e){
    if(s>=e) return;
    if(s<e){
        int pi=partition(a,s,e);
        quickSort(a,s,pi-1);
        quickSort(a,pi+1,e);
    }
}
int main(){
    vector<int>arr{10,2,3,6,3,1,0,4};
    int n=arr.size();
    quickSort(arr,0,n-1);
    for(int x:arr)cout<<x<<" ";
    cout<<endl;
    return 0;
}