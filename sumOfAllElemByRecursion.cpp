#include<bits/stdc++.h>
using namespace std;

int calArraySum(int nums[], int size){
    //zodi array empty hoye zay tahole 0 return kore dite hobe.

    //1 details way
    // int total=0;
    // total+=nums[size];
    // if(size<=0){
    //     return total;
    // }
    // int prv=calArraySum(nums, size-1);
    // return total+prv;

    //2 shortcut way
    if(size==0) return nums[0];
    return nums[size]+calArraySum(nums, size-1);
    }
int main(){
    int nums[6]={2,4,8,3,2,6};
    int size=sizeof(nums)/sizeof(nums[0]);
    int value=calArraySum(nums, size-1);
    cout<<value;
    return 0;
}