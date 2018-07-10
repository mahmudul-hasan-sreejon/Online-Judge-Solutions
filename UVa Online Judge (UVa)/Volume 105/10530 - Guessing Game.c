#include<stdio.h>
#include<string.h>
#define MAX 15
int main()
{
    int num, min, max;
    char str[MAX], dump;

    min = 0, max = 11;
    while( scanf("%d%c", &num, &dump)==2 && num!=0 )
    {
        gets(str);

        if( strcmp(str, "too high")==0 )
            max = (max<num) ? max : num;
        else if( strcmp(str, "too low")==0 )
            min = (min>num) ? min : num;
        else
        {
            if( num>min && num<max )
                printf("Stan may be honest\n");
            else
                printf("Stan is dishonest\n");

            min = 0, max = 11;
        }
    }
    return 0;
}