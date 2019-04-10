/*function to rotate array by k steps*/

void rotate(int* nums, int numsSize, int k) {
    if (numsSize<2)
        return;
    if (k>numsSize)
    {
        k = k%numsSize;
    }
    if (k==0 || k==numsSize)
        return;
        
// swap first k and last k bits        
    for (int i = 0; i<k;i++)
    {
        nums[i]=nums[i]^nums[numsSize-k+i];
        nums[numsSize-k+i]=nums[i]^nums[numsSize-k+i];
        nums[i]=nums[i]^nums[numsSize-k+i];
    }
    
//reorder the last bits.    
    for (int i = 0;i<k;i++)
    {
    int temp = nums[numsSize-1];
    for (int j = 0; j<numsSize-k;j++)
    {
        nums[numsSize-1-j]=nums[numsSize-2-j];
    }
    nums[k]=temp;
    }
}
