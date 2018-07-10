#include <cstdio>
#include <cstring>

int m, n, value[1005], sum;
char dictionary[1005][20], jobDes[20];

int main()
{
    scanf("%d %d", &m, &n);
    for(int i=0 ; i<m ; i++) scanf("%s %d", dictionary[i], &value[i]);

    while( n-- )
    {
        sum = 0;
        while( scanf("%s", jobDes) && !(strlen(jobDes)==1 && jobDes[0]=='.') )
            for(int i=0 ; i<m ; i++)
                if( !strcmp(jobDes, dictionary[i]) ) sum += value[i];
        printf("%d\n", sum);
    }
    return 0;
}