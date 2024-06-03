#include<bits/stdc++.h>
using namespace std;
int findFibonacci(int n){
    //Recursion e ekadik baseCase use kora zay
  //baseCase 1
  if(n==0){
    return 0;
  }
  //baseCase 2
   if(n==1){
    return 1;
  }
  //approach 1
//   //first precding number before n-1
//   int one=findFibonacci(n-1);
//   //last preceding number before n-2
//   int two=findFibonacci(n-2);
//   return one+two;
  
  //approach 2
  return findFibonacci(n-1)+findFibonacci(n-2);
}
int main(){
    int input;
    cin>>input;
    int fiboResult=findFibonacci(input);
    cout<<"fibonacci for "<<input<<" is: "<<fiboResult;
    return 0;
}