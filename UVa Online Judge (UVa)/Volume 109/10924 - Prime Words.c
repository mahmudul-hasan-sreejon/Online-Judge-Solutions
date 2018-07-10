#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char word[25];

    while( scanf("%s", word)==1 )
    {
        int i, len = strlen(word), w_value = 0;
        for(i=0 ; i<len ; i++)
        {
            if( word[i]>='a' && word[i]<='z' )
                w_value += word[i]-96;
            else
                w_value += word[i]-38;
        }

        int flag = 0;
        for(i=2 ; i<=sqrt(w_value) ; i++)
        {
            if( w_value%i==0 )
            {
                flag = 1;
                break;
            }
        }

        if( w_value==1 || flag==0 )
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
