#include <cstdio>
#include <cstring>

const int S = 100000005;
char line[S];
int len, counter, MAX, step;

int main()
{
    while( gets(line) )
    {
        len = strlen(line), counter = 0, MAX = 0;
        for(int i=0 ; i<len ; i++)
        {
            if( line[i]==' ' ) counter++;
            else
            {
                if( MAX<counter ) MAX = counter;
                counter = 0;
            }
        }
        step = 0;
        while( MAX!=1 )
        {
            MAX = (MAX/2)+(MAX%2);
            step++;
        }

        printf("%d\n", step);
    }
    return 0;
}
