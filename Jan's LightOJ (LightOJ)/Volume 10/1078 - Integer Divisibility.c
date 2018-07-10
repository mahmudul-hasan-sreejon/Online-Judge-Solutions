#include<stdio.h>
int main()
{
    long long int tc, i, num1, num2, result, var, sho;
 
    scanf("%lld", &tc);
    {
        for(i=1 ; i<=tc ; i++)
        {
            scanf("%lld%lld", &num1, &num2);
 
            result=1;
            sho=num2;
 
            while( 1 )
            {
                if (sho < num1)
                {
                    sho = (sho*10)+num2;
                    result = result+1;
                }
 
                var = sho % num1;
                if( var == 0)
                    break;
                else
                    sho=var;
            }
            printf("Case %lld: %lld\n", i, result);
        }
    }
    return 0;
}