//A cpp program asked in TCS NQT

#include<iostream>
using namespace std;
int timeTaken(int n1, int n2, int x){
  if(n1>=n2){
   return -1; 
  }
  int d2=0;
  int d1=x;
  
  int sd=0;
    while(d1>=d2){
    d1=d1+n1;
    d2=d2+n2;
      sd++;
  }
  return sd;
}
int main(){
  int n1,n2,x;
  cin>>n1>>n2>>x;
cout<<timeTaken(n1,n2,x);
  return 0;
  
}
