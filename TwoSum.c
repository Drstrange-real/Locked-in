#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize);
int main(){
    // Test Case: Find two numbers that add up to 9
    int numsSize;
    printf("Enter the number of elements: ");
    scanf("%d",&numsSize);
    int nums[numsSize];
    printf("Enter the elements ");
    for(int i = 0; i < numsSize; i++){
      printf(": ");
      scanf("%d",&nums[i]);
    }
    int target;
    printf("Enter the target to find: ");
    scanf("%d",&target);
    int returnSize = 0;

    printf("Testing Two Sum...\n");
    printf("Input Array: [2, 7, 11, 15], Target: %d\n", target);

    // Call the function
    int* result = twoSum(nums, numsSize, target, &returnSize);

    // Check and print the results
    if (result != NULL && returnSize == 2) {
        printf("Success! Indices found: [%d, %d]\n", result[0], result[1]);
        printf("Values are: nums[%d] (%d) + nums[%d] (%d) = %d\n", 
               result[0], nums[result[0]], result[1], nums[result[1]], target);
        
        // Always free dynamically allocated memory!
        free(result); 
    } else {
        printf("No two sum solution found.\n");
    }

    return 0;
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
              int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result; 
            }
        }
    }
    *returnSize = 0;
    return NULL;
}