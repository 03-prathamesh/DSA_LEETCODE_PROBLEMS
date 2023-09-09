#include<bits/stdc++.h>
using namespace std;

int main(){

       int n=8;
       string str="";
       

       while(n!=0){
          
             int temp=n%8;
             char c=temp+'0';
             str=str+c;
             n=n/8;
             


       }
       reverse(str.begin(),str.end());
       cout<<str<<endl;

}