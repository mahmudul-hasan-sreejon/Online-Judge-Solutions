#include <cstdio>

long nCase, Z, I, M, L;
long randomNumber[10005], len, temp, flag;

int main()
{
    nCase = 1;
    while( scanf("%ld %ld %ld %ld", &Z, &I, &M, &L)==4 && (Z || I || M || L) )
    {
        randomNumber[5005] = {0}, len = 0, flag = 0;
        while( true )
        {
            temp = ((Z*L)+I)%M;
            for(int i=0 ; i<len ; i++)
                if( randomNumber[i]==temp ) flag = 1;
            if( flag ) break;
            randomNumber[len] = temp;
            len++;
            L = temp;
        }

        printf("Case %ld: %ld\n", nCase, len);
        ++nCase;
    }
    return 0;
}
