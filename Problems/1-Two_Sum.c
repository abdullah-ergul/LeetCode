#include <stdio.h>
#include <stdlib.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j, *res=(int*)malloc(2*sizeof(int));
    for(i=0; i<numsSize; i++){
        for(j=1; j<numsSize; j++){
            if(nums[i]+nums[j] == target){
                res[0]=i;
                res[1]=j;
                return res;
            }
        }
    }
}

int main(){
    int arr[]= {2,7,11,5}, *m;
    int *res= twoSum(arr,4,9,m);
    printf("%d %d",res[0],res[1]);

    return 0;
}