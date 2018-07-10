#include <cstdio>
#include <cstring>

char message[1005], temp[1005];
int value, n;

int main()
{
    while( gets(message) )
    {
        int len = strlen(message);
        if( message[0]-48>=0 && message[0]-48<=9 )
        {
            int len2 = 0;
            for(int i=len-1 ; i+1!=0 ; i--) temp[len2] = message[i], len2++;
            temp[len2] = '\0';

            value = 0;
            for(int i=0 ; i<len2 ; i++)
            {
                value = (value*10)+(temp[i]-48);
                if( (value>=65 && value<=90) || (value>=97 && value<=122) || value==32 ||
                value==33 || value==44 || value==46 || value==58 || value==59 || value==63 ) printf("%c", value), value = 0;
            }
        }
        else
            for(int i=len-1 ; i>=0 ; i--)
            {
                n = message[i];
                while( n!=0 ) printf("%d", n%10), n /= 10;
            }
        printf("\n");
    }
    return 0;
}
