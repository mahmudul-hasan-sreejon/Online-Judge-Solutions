#include <cstdio>

int n[20005];

int main()
{
    int tc, nCase = 0;

    scanf("%d", &tc);
    while( tc-- )
    {
        int s;
        scanf("%d", &s);

        for(int i=0 ; i<s-1 ; i++) scanf("%d", &n[i]);

        int a = 0, b = 0, c = 0, sum = 0, MAX = -1;
        for(int i=0 ; i<s-1 ; i++)
        {
            sum += n[i];
            if( (sum>MAX) || (sum==MAX && (i-a)>(b-c)) )
            {
                MAX = sum;
                b = i+1;
                c = a;
            }
            else if( sum<0 )
            {
                a = i+1;
                sum = 0;
            }
        }

        if( MAX>0 ) printf("The nicest part of route %d is between stops %d and %d\n", ++nCase, c + 1, b + 1);
        else printf("Route %d has no nice parts\n", ++nCase);
    }
    return 0;
}
