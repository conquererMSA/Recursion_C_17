#include<bits/stdc++.h>
using namespace std;
int countOccurence(int arr[], int size, int matchValue, int index){
    int count=0;
    if(index==size){
        return 0;
    }
    //index barte barte zokhon size er soman hoye zabe tokhon 0 reurn korbe. karon size index e element thake na.
   if(arr[index]==matchValue){
    count=1;
   }
   //shudhumatro element match korlei count 1 kora hobe.
   int val=countOccurence(arr,size,matchValue, index+1);
   //ekhane countOccurence function ager match count value return korbe.
   return val+count;
}
int main(){
    int arr[3]={1,2,1};
    int count=countOccurence(arr,3,8,0);
    cout<<count;
    return 0;
}