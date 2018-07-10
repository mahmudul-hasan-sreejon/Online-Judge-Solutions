#include <cstdio>
#include <cstring>

const char alpha_numerals[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
int counter[65];
char line[2005];

bool is_prime(int num)
{
    if( num==0 || num==1 ) return false;
    for(int J=2 ; J*J<=num ; J++)
        if( num%J==0 )
            return false;
    return true;
}

int main()
{
    int tc;
    char dump;

    scanf("%d%c", &tc, &dump);
    int ncase = 0;
    while( tc-- )
    {
        gets(line);

        for(int I=0 ; I<65 ; I++) counter[I] = 0;

        for(int I=0 ; I<strlen(line) ; I++)
        {
            if( line[I]>='0' && line[I]<='9' ) counter[line[I]-'0']++;
            if( line[I]>='A' && line[I]<='Z' ) counter[line[I]-'A'+10]++;
            if( line[I]>='a' && line[I]<='z' ) counter[line[I]-'a'+10+26]++;
        }

        printf("Case %d: ", ++ncase);
        bool flag = true;
        for(int I=0 ; I<65 ; I++)
        {
            if( is_prime(counter[I]) )
            {
                printf("%c", alpha_numerals[I]);
                flag = false;
            }
        }

        if( flag ) printf("empty");
        printf("\n");
    }
    return 0;
}
