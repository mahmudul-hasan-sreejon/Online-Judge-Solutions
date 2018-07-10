#include<stdio.h>
int main()
{
    int tc, i, num, sum1, sum2;

    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%d", &num);

        sum1 = num/2;
        sum2 = num-sum1;

        printf("%d %d\n", sum1, sum2);
    }
    return 0;
}
