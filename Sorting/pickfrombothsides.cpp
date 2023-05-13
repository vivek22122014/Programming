// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//     vector<int> v{5,-2,3,1,2};
//     int B=3;

//     int sum=0;
//     for(int i=0;i<B;i++){
//         sum+=v[i];
//     }

//     int maxSum=sum;

//     int i=B-1,j=v.size()-1;
//     while(i>=0){
        
//         sum=sum-v[i]+v[j];
//         maxSum=max(sum,maxSum);
//         i--;
//         j--;
//     }
//     cout<<maxSum<<endl;
//     return 0;

// }

//TC:O(n)
//SC:O(1)

//uisng prefix sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v{5,-2,3,1,2};
    int B=3;
    int n=v.size();
    vector<int> pfsum(v.size(),0);
    pfsum[0]=v[0];
    for(int i=1;i<v.size();i++){
        pfsum[i]=pfsum[i-1]+v[i];
    }


    int maxSum=pfsum[B-1];

    int i=B-2,j=v.size()-2;
    while(i>=0){
        maxSum=max((pfsum[i]+(pfsum[n-1]-pfsum[j])),maxSum);
        i--;
        j--;
    }
    cout<<maxSum<<endl;





    return 0;
}


//TC:O(n)
//SC:O(n)