#include <cstdio>

int k, m, temp, c, r, courseNumber, courseTaken;
bool courseSelected[10005], flag;

int main()
{
    while( scanf("%d", &k)==1 && k )
    {
        scanf("%d", &m);

        for(int i=0 ; i<10002 ; i++) courseSelected[i] = false;

        for(int i=1 ; i<=k ; i++)
        {
            scanf("%d", &temp);
            courseSelected[temp] = true;
        }

        flag = true;
        for(int i=1 ; i<=m ; i++)
        {
            scanf("%d %d", &c, &r);
            courseTaken = 0;
            for(int j=1 ; j<=c ; j++)
            {
                scanf("%d", &courseNumber);
                if( courseSelected[courseNumber] ) courseTaken++;
            }
            if( courseTaken<r ) flag = false;
        }

        if( flag ) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
