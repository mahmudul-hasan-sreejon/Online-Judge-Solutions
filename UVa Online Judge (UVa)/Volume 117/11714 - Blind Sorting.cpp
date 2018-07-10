#include <cstdio>
#include <cmath>

int n, comparison;

int main()
{
    while( scanf("%d", &n)!=EOF )
    {
        comparison = (n-1)+log2(n-1);
        printf("%d\n", comparison);
    }
    return 0;
}
