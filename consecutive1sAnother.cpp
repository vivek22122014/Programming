#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 string s="10110101110101";
 int max_count=0;
 int countOnes=0;
 for(int i=0;i<s.size();i++){
    countOnes=0;
    if(s[i]=='0'){
     countOnes++;
     int l=i-1;
     int r=i+1;
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