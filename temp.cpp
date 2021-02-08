// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int nums[2][3]  =  { {16, 18, 20}, {25, 26, 27} };
    int arr[10][10] = {0};
    int* ptr;
    
    ptr = &nums[0][0];
    
    for(int i = 0; i < 3; i++){
        
        printf("%d ", nums[0][i]);
        
    }
    
    printf("\n");
    
    for(int i = 0; i < 3; i++){
        
        printf("%d ", nums[1][i]);
        
    }
    
    printf("\n");
    printf("***\n");
    printf("%d", *(*(nums + 1) + 2)	);
    
    for (int j = 0; j < 10; j++){
        
        printf("Please enter a number to the array: ");
        scanf("%d", *(*(ptr + j) + 9);
    }
    
    for (int i = 0; i < 10; i++)
    return 0;
}
