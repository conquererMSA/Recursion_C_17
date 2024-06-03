#include<bits/stdc++.h>
using namespace std;
//cout<<123%10<<endl;//3
//   cout<<123/10;//12
//**return findSumOfDigits(n/10)%10;

// int lastDigit=n%10;
// return lastDigit+findSumOfDigits(n/10);

int findSumOfDigits(int n){
   if(n<9){
    return n;
   }
   //approach 1
// int lastDigit=n%10;
// int due=findSumOfDigits(n/10);
// int oneTimeValue= due+lastDigit;
// return oneTimeValue;

//approach 2
// int lastDigit=n%10;
//  return lastDigit+findSumOfDigits(n/10);

}
int main(){
    int input;
    cin>>input;
    int result=findSumOfDigits(input);
    cout<<result;
    return 0;
}