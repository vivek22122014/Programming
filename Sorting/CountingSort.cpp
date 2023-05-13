#include<bits/stdc++.h>
using namespace std;


void countingSort(int a[],int n){
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        largest=max(largest,a[i]);
    }
    vector<int> freq(largest+1,0);
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    int j=0;
    for(int i=0;i<freq.size();i++){
        while(freq[i]>0){
            a[j]=i;
            freq[i]--;
            j++;
        }
    }
    return;
}
int main(){
    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int size=sizeof(arr)/sizeof(int);
    countingSort(arr,size);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}