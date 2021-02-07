#include <stdlib.h>
#include <stdio.h>

int main() {
    
    float arr[100];
    int n = 0;
    float* ptr = &arr[0];
    
    printf("Please enter the number of elements: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        
        printf("Please enter #%d: ", i + 1);
        scanf("%f", ptr + i);
        
    }
    printf("***\n");
    for (int k = 0; k < n; k++){
        printf("Address for #%d element: %p\n", k + 1, ptr + k);
        printf("Value of #%d element: %f\n", k + 1, *(ptr + k));
    }
    for (int j = 1; j < n; j++) {
        
        if (*(ptr + j) > *ptr){
            
            ptr = (ptr + j);
            //printf("#%d run\n", j);
            
        }
        
    }
    printf("***\n");
    printf("Largest element's address: %p\n", ptr);
    printf("Largest element: %.2f\n", *ptr);
}
