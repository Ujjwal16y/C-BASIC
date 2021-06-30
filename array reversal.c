#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr,*arr1, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }
    arr1=(int*) malloc(num*sizeof(int));
    for(i=1;i<=num;i++)
    {
        arr1[i-1]=arr[num-i];

    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr1 + i));
    return 0;
}
