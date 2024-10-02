// deleting an element in a sorted array !!
#include <stdio.h>

void main()
{

    int a[20];
    int i, size, posi, num;
    printf("enter the size of array \n");
    scanf("%d", &size);
    if (size > 20)
    {
        printf("in valid size ");
    }
    else
    {
        printf(" enter the elements of the array  = \n");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
    }

    printf("which posi element do you want to delete ?? = ");
    scanf("%d", &posi);
    if (posi > size || posi < 1)
    {
        printf("invalid position");
    }
    else
    {
        for (i = posi - 1; i < size; i++)
        {
            a[i] = a[i + 1];
        }
        size--;
        printf(" your modified array is = ");
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }
    }
}