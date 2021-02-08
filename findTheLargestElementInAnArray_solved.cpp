#include <stdlib.h>
#include <stdio.h>

int main() {

    float arr[100] = {0.0};
    int n = 0;
    float* ptr;
    float big;
    float* ptr_big;

    printf("Please enter the number of elements: ");
    scanf_s("%d", &n);

    ptr = &arr[0];

    for (int i = 0; i < n; i++) {

        printf("Please enter #%d: ", i);
        scanf_s("%f", ptr + i);

    }

    printf("***\n");

    for (int k = 0; k < n; k++) {
        printf("Address for #%d element: %p\n", k, ptr + k);
        printf("Value of #%d element: %.2f\n", k, *(ptr + k));
        printf("\n");
    }

    big = *ptr;
    ptr_big = ptr;

    for (int j = 0; j < n; j++) {

        if (*(ptr + j) >= *ptr) {

            big = *(ptr + j);
            ptr_big = (ptr + j);

        }

    }
    printf("***\n");
    printf("Largest element's address: %p\n", ptr_big);
    printf("Largest element: %.2f\n", *ptr_big);
}
