#include <cstdio>
#include <cstring>

char line[105];

int main()
{
    while( gets(line) )
    {
        int len = strlen(line), n = 0, counter = 0;
        for(int i=0 ; i<len ; i++)
        {
            if( line[i]=='0' )
            {
                n++;
                if( line[(i+1)%len]=='0' ) counter++;
            }
        }

        if( (counter*len)>(n*n) ) printf("SHOOT\n");
        else if( (counter*len)<(n*n) ) printf("ROTATE\n");
        else if( (counter*len)==(n*n) ) printf("EQUAL\n");
    }
    return 0;
}
