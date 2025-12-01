#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int threshold = n / 2;
    int majority = -1;

    for(int i = 0; i < n; i++) {
        int count = 0;

        
        for(int j = 0; j < n; j++) {
            if(nums[i] == nums[j]) {
                count++;
            }
        }

        if(count > threshold) {
            majority = nums[i];
            break;  
        }
    }

    printf("%d\n", majority);

    return 0;
}