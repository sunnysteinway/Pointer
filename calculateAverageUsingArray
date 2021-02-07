#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n = 0; 
    float sum = 0.0;
    float* ptr;
    
    printf("Please enter the number of the array: ");
    scanf("%d", &n);
    
    while (n > 100 || n <1){
        
    printf("Error! The number should be 1 -100\n");
    printf("Please enter the number of the array: ");
    scanf("%d", &n);
        
    }
    
    ptr = (float*)calloc(n, sizeof(float));
    
    if(ptr == NULL){
        
        printf("Error!!!\n");
        
    }
    
    
    for (int i = 0; i < n; i++){
        
        printf("Please enter #%d element: ", i + 1);
        scanf("%f", ptr + i);
        sum += *(ptr + i);
        
    }
    
    printf("Sum of the array = %f\n", sum);
    
    for (int j = 0; j < n; j++){
        
        printf("#%d element address: %p\n", j + 1, ptr + j);
        
    }
    
    float avg = sum / n;
    
    printf("The average of the entire array is: %.2f", avg);
    
    free(ptr);
}
