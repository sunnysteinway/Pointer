#include <stdlib.h>
#include <stdio.h>

int main() {

    int n = 0;
    float* ptr = nullptr;

    printf("Please enter the number of elements: ");
    scanf_s("%d", &n);

    ptr = (float*)calloc(n, sizeof(float));

    for (int i = 0; i < n; i++) {

        printf("Please enter #%d: ", i);
        scanf_s("%f", ptr + i);

    }

    printf("***\n");

    for (int k = 0; k < n; k++) {
        printf("Address for #%d element: %p\n", k, ptr + k);
        printf("Value of #%d element: %f\n", k, *(ptr + k));
        printf("\n");
    }

    for (int j = 0; j < n; j++) {

        if (*(ptr + j) > *ptr) {

            ptr = (ptr + j);

        }

    }
    printf("***\n");
    printf("Largest element's address: %p\n", ptr);
    printf("Largest element: %.2f\n", *ptr);
}
