int total=0;
    total+=nums[size];
    if(size<=0){
        return total;
    }
    int prv=calArraySum(nums, size-1);
    return total+prv;