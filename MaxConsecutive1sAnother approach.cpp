#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 string s="10110101110101";
 int MaxOnes=0;
 for(int i=0;i<s.size();i++){
   int NOO=0;
   int left=0,right=0;
   if(s[i]=='0'){
     int l=i-1;
     int r=i+1;
        while(s[l]=='1'&&l>=0){
             left++;
             l--;
          }
        while(s[r]=='1'&&r<s.size()){
            right++;
            r++;
        }
            NOO=left+right+1;
            MaxOnes=max(NOO,MaxOnes);
   } 
 }
  cout<<"MaxOnes "<<MaxOnes<<endl;
  
  
  
  
  return 0;
}