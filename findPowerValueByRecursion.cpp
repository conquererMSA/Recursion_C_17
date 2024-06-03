#include<bits/stdc++.h>
using namespace std;
int findPowerValue(int num, int power, int end){
      if(power==end){
        return num;
      }
      int value=findPowerValue(num, power+1, end);
      return value*num;
}
int main(){
    int value=findPowerValue(4,1,5);
    cout<<value;
    return 0;
}