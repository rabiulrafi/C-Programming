#include <stdio.h>
 
int findLastOccurrence(int nums[], int n, int target)
{
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high)
    {
    int mid = (low + high)/2;
     if (target == nums[mid])
        {
            result = mid;
            low = mid + 1;
        }
      else if (target < nums[mid]) {
            high = mid - 1;
        }
            else {
            low = mid + 1;
        }
    }
 
    return result;
}
 
int main(void)
{
    int nums[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int n = sizeof(nums)/sizeof(nums[0]);
 
    int target = 5;
 
    int index = findLastOccurrence(nums, n, target);
 
    if (index != -1)
    {
        printf("The last occurrence of element %d is located at index %d",
                target, index);
    }
    else {
        printf("Element not found in the array");
    }
 
    return 0;
}
