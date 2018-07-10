#include <cstdio>
#include <cstring>

char line[1005];
int counter[130];

int main()
{
    bool new_line = false;

    while( gets(line) )
    {
        for(int i=0 ; i<130 ; i++) counter[i] = 0;

        int len = strlen(line);
        for(int i=0 ; i<len ; i++)
        {
            int pos = line[i];
            counter[pos]++;
        }

        if( new_line ) printf("\n");
        new_line = true;

        for(int i=1 ; i<1005 ; i++)
        {
            for(int j=129 ; j>=0 ; j--)
            {
                if( counter[j]==i )
                {
                    printf("%d %d\n", j, i);
                    len--;
                }
            }
            if( !len ) break;
        }
    }
    return 0;
}
