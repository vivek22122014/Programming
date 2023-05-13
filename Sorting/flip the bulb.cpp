/*
N light bulbs are connected by a wire.
Each bulb has a switch associated with it, however due to faulty wiring, a switch also changes the
state of all the bulbs to the right of current bulb.
Given an initial state of all bulbs, find the minimum number of switches you have to press to turn on all
the bulbs.
You can press the same switch multiple times.
Note: 0 represents the bulb is off and 1 represents the bulb is on.

*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> A{0,1,0,1};
    int count=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0){
            count++;
        for(int j=i;j<A.size();j++){

           A[j]=A[j]^1;
            // A[j]=1-A[j];

            // if(A[j]==0){
            //     A[j]=1;
            // }
            // else{
            //     A[j]=0;
            // }
        }
        }
    }

    cout<<"Total Flips required: "<<count<<endl;


    return 0;
}