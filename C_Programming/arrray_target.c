#include <stdio.h> 
#include <stdlib.h> 
 
void findTwoSum(int nums[], int n, int target) { 
    for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j < n; j++) { 
            if (nums[i] + nums[j] == target) { 
                printf("Indices: %d and %d\n", i, j); 
                return; 
            } 
        } 
    } 
    printf("No two numbers found that add up to the target.\n"); 
} 
 
int main() { 
    int n, target; 
 
    printf("Enter the number of elements in the array: "); 
    scanf("%d", &n); 
 
      int *nums = (int *)malloc(n * sizeof(int)); 
     
     
    printf("Enter the elements of the array:\n"); 
    for (int i = 0; i < n; i++) { 
        scanf("%d", &nums[i]); 
    } 
 
    
    printf("Enter the target sum: "); 
    scanf("%d", &target); 
 
     findTwoSum(nums, n, target); 
 
     
    free(nums); 
 
    return 0; 
} 