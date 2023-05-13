#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 string s="10110101110101";
 int max_count=0;
 int countOnes=0;
 int count_zeros=0;
 for(int i=0;i<s.size();i++){
    countOnes=0;
    count_zeros=0;
   int j=i;
   while(s[j]=='0'&&j<s.size()){
     count_zeros++;
     j++;
   }
   j--;
   if(count_zeros==1){
     countOnes++;
     int l=j-1;
     int r=j+1;
     while(s[l]=='1'&&l>=0){
     countOnes++;
     l--;
   }
   
   while(s[r]=='1'&&r<s.size()){
     countOnes++;
     r++;
   }
   }
  max_count=max(countOnes,max_count);

   
 }
   
 
 // max_count=max(countOnes,max_count);
  cout<<"maxcount "<<max_count<<endl;
  return 0;
}