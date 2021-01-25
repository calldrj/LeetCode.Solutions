int maxSubArray(int* nums, int n){
    int globalMax = nums[0];
    
    for (int k = 1, localMax = nums[0]; k < n; k++) {
        if (localMax > 0) localMax += nums[k];
        else localMax = nums[k];
        if (globalMax < localMax) globalMax = localMax;
    }
    
    return globalMax;
}


#include <stdio.h>
#include <stdlib.h>

int maxSubArray(int* nums, int n){
    int localMax = nums[0], globalMax = nums[0];
    
    printf("%d\t", localMax);
    
    for (int k = 1; k < n; k++) {
        if (localMax > 0) 
            localMax += nums[k];
        else 
            localMax = nums[k]; 
        
        printf("%d\t", localMax);
            
        if (globalMax < localMax) globalMax = localMax;
    }
    printf("\n");
    return globalMax;
    // for (int k = 0; k < n; k++) printf("%d\t", s[k]);
}


int main()
{
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4}, n = 9;
    for (int k = 0; k < n; k++) printf("%d\t", nums[k]);
    printf("\n");
    int m = maxSubArray(nums, n);
    printf("\n%d\n", m);

    return 0;
}