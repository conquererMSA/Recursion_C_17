#include<bits/stdc++.h>
using namespace std;
bool isPrime(int number, int divisor = 2)
{
    // Base cases
    if (number <= 2)
        return (number == 2);
    if (number % divisor == 0)
        return false;
    if (divisor * divisor > number)
        return true;

    // Recursive case: check if the number is divisible by the next divisor
    return isPrime(number, divisor + 1);
}
int sumOfPrime(int x, int y){
    if(x>y){
        return 0;
    }
   int prime=isPrime(x)?x:0;
   int val=sumOfPrime(x+1, y);
   return val+prime;
}
int main(){
    int x,y;
    cin>>x>>y;
    int total=sumOfPrime(x,y);
    cout<<total;
    return 0;
}