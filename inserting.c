// inserting an element in a sorted array !!
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

        if (size == 20)
        {
            printf("insertion wont be allowed in a sorted array ");
        }
        else
        {
            printf(" which position elements do u wanna add ?? = ");
            scanf("%d", &posi);
            printf(" and what would be the new element = ");
            scanf("%d", &num);
            if (posi < 1 || posi > size + 1)
            {
                printf("invalid posi ");
            }
            else
            {
                for (i = size - 1; i >= posi - 1; i--)
                {
                    a[i + 1] = a[i];
                }
                size++;
            }
            a[posi - 1] = num;

            printf("your modified array is \n ");
            for (i = 0; i < size; i++)
            {
                printf("%d", a[i]);
            }
        }
    }
}
