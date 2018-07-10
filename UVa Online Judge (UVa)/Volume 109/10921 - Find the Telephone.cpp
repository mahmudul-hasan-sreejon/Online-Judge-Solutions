#include <cstdio>
#include <cstring>

char line[35];

int main()
{
    while( scanf("%s", line)!=EOF )
    {
        int len = strlen(line);
        for(int i=0 ; i<len ; i++)
        {
            if( line[i]=='A' || line[i]=='B' || line[i]=='C' ) printf("2");
            else if( line[i]=='D' || line[i]=='E' || line[i]=='F' ) printf("3");
            else if( line[i]=='G' || line[i]=='H' || line[i]=='I' ) printf("4");
            else if( line[i]=='J' || line[i]=='K' || line[i]=='L' ) printf("5");
            else if( line[i]=='M' || line[i]=='N' || line[i]=='O' ) printf("6");
            else if( line[i]=='P' || line[i]=='Q' || line[i]=='R' || line[i]=='S' ) printf("7");
            else if( line[i]=='T' || line[i]=='U' || line[i]=='V' ) printf("8");
            else if( line[i]=='W' || line[i]=='X' || line[i]=='Y' || line[i]=='Z' ) printf("9");
            else printf("%c", line[i]);
        }
        printf("\n");
    }
    return 0;
}
