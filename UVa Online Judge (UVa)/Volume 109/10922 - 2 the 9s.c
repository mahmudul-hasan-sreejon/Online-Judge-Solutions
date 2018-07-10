#include <stdio.h>
#include <string.h>

int main()
{
    char num[1005];

    while( scanf("%s", num)==1 && strcmp(num,"0")!=0 )
    {
        int i, len = strlen(num), sum = 0;
        for(i=0 ; i<len ; i++)
            sum += num[i]-'0';

        int flag;
        if( sum%9==0 ) flag = 1;
        else flag = 0;

        int degree = 1;
        if( flag==1 )
        {
            while( sum>9 )
            {
                int temp = 0;
                while( sum!=0 )
                {
                    temp += sum%10;
                    sum /= 10;
                }
                sum = temp;
                degree++;
            }
        }

        if( flag==1 ) printf("%s is a multiple of 9 and has 9-degree %d.\n", num, degree);
        else printf("%s is not a multiple of 9.\n", num);
    }
    return 0;
}
