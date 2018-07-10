#include<stdio.h>
#include<math.h>
int main()
{
    int tc, i, m_p, l_p, sum, result;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%d %d", &m_p, &l_p);

        sum = abs(l_p-m_p);

        result = ((sum*4)+3+5+3+(m_p*4)+3+5);

        printf("Case %d: %d\n", i, result);
    }
    return 0;
}
