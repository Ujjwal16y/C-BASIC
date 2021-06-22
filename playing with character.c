#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch,c[20],sen[100];
    scanf("%c",&ch);
    scanf("%s\n",&c);
    scanf("%[^\n]s",&sen);
    printf("%c\n",ch);
    printf("%s\n",c);
    printf("%s",sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
