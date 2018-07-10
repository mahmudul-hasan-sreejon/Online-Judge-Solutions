#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    int counter = 0;
    while( n-- )
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if( (a+b+c)>=2 ) counter++;
    }

    printf("%d\n", counter);
    return 0;
}