#include<stdio.h>
#include<ctype.h>
#define MAX 1000
int main ()
{
    int i, count, flag;
    char text[MAX];

    while( gets(text) )
    {
        count=0;
        flag=1;
        for(i=0 ; text[i] ; i++)
        {
            if( isalpha(text[i]) )
            {
                if( flag )
                    count++;
                flag=0;
            }
            else
	            flag=1;
        }
        printf("%d\n", count);
    }
    return 0;
}
