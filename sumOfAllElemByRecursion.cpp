#include<bits/stdc++.h>
using namespace std;

int calArraySum(int nums[], int size){
    //zodi array empty hoy tahole 0 return kore dite hobe.
    int total=0;
    tota+=nums[size];
    if(size==0){
        return tota+=nums[size];
    }
    calArraySum(nums, size-1);
    return total;
    


}

int main(){
    int nums[5]={2,4,8,3,2};
    int size=sizeof(nums)/sizeof(nums[0]);
    int value=calArraySum(nums, size-1);
    cout<<value;
    return 0;
}