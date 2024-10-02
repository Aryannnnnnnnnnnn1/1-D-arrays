#include<stdio.h>

int main () {
    int a[20];
    int i, size;

    printf("Enter the size of array: \n");
    scanf("%d", &size);

    if(size > 20){
        printf("Invalid size\n");
    }
    else {
        printf("Enter the elements of the array: \n");
        for(i = 0; i < size; i++){
            scanf("%d", &a[i]);
        }

        printf("Your array is: \n");
        for(i = 0; i < size; i++){
            printf("%d ", a[i]);
        }
    }

    return 0;
}


































}