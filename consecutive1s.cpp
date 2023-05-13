#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 string s="0111111001101";
 int maxcount=0;
 int countOnes=0;
 int count_zeros=0;
 for(int i=0;i<s.size();i++){
   countOnes=0;
 count_zeros=0;
    int j=i;
    for(j=i;s[j]!='0'&&j<s.size();j++){
       if(s[j]=='1')countOnes++;
     }
     
    for(;s[j]!='1'&&j<s.size();j++){
       if(s[j]=='0')count_zeros++;
     }
     if(count_zeros==1){
       countOnes++;
       for(;s[j]!='0'&&j<s.size();j++){
       if(s[j]=='1')countOnes++;
     }
     }
    //  cout<<"count_zeros: "<<count_zeros<<endl;
    //  cout<<"countOnes: "<<countOnes<<endl;
   maxcount=max(countOnes,maxcount);
   
 }
  maxcount=max(countOnes,maxcount);
 // maxcount=max(count,maxcount);
  cout<<"maxcount "<<maxcount<<endl;
  return 0;
}