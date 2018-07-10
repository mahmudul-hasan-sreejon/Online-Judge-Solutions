#include <cstdio>
#include <cstring>
#include <cmath>

char tape[105];
int bits[15];

int main()
{
    while( gets(tape) )
    {
        int pos = 0;
        if( tape[0]=='|' )
        {
            for(int i=1 ; i<strlen(tape)-1 ; i++)
            {
                if( tape[i]==' ' ) bits[pos++] = 0;
                else if( tape[i]=='o' ) bits[pos++] = 1;
            }

            int sum = 0;
            for(int i=pos-1 ; i>=0 ; i--)
                sum += bits[i]*pow(2, pos-1-i);

            printf("%c", sum);
        }
    }
    return 0;
}
