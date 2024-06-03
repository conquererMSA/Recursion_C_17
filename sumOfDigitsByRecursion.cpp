#include<bits/stdc++.h>
using namespace std;
//cout<<123%10<<endl;//3
//   cout<<123/10;//12
int findSumOfDigits(int n){
    //baseCase;
   if(n<=9){
    return n;
   }
   //approach 1 details
// int lastDigit=n%10;
// int due=findSumOfDigits(n/10);
// int oneTimeValue= due+lastDigit;
// return oneTimeValue;

//approach 2 short
// int lastDigit=n%10;
//  return lastDigit+findSumOfDigits(n/10);

//approach 3 little
//first find last digit n%10
//then find rest digit n/10
// return findSumOfDigits(n/10)%10;//Wrong answer: ai method e function er param e za deya hoe tar bag folke 10 diye mod kora hocce. ekhane 1-8 porzonto sum dile first degit return kore, kintu 9 er beshi dile 0 return kore. karon baseCase e 9 er chuto deya ache, and 9 ke 10 diye vag korle 0 ase, and 0 ke 10 diye mod korle 0 hoy za protita function theke return hoy.
return n%10+findSumOfDigits(n/10);//Correct answer: ekhane protome function er argument ke 10 diye mod kore last digit ber kore neya hocce. the argument ke 10 diye bag kore recursive function e deya hocce. e vabe colte takbe zotokkhon na porzonto argument-param number 9 ba er chuto na hocce.
}
int main(){
    int input;
    cin>>input;
    int result=findSumOfDigits(input);
    cout<<result;
    return 0;
}