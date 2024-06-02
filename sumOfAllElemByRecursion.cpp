#include<bits/stdc++.h>
using namespace std;
int calArraySum(int nums[], int size){
    for(int i=0; i<size; i++){
        cout<<nums[i];
    }
    return 0;
}
int main(){
    int nums[5]={2,4,8,3,2};
    int size=sizeof(nums)/sizeof(nums[0]);
    int value=calArraySum(nums, size);
    return 0;
}