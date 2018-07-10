#include <cstdio>
#include <cstring>

char name_1[25], name_2[25];

int main()
{
    int tc;
    char dump;

    scanf("%d%c", &tc, &dump);
    while( tc-- )
    {
        gets(name_1);
        gets(name_2);

        if( strlen(name_1)==strlen(name_2) )
        {
            bool flag;
            for(int i=0 ; i<strlen(name_1) ; i++)
            {
                if( name_1[i]==name_2[i] ) flag = true;
                else if( (name_1[i]=='a' || name_1[i]=='e' || name_1[i]=='i' || name_1[i]=='o'|| name_1[i]=='u') && (name_2[i]=='a' || name_2[i]=='e' || name_2[i]=='i' || name_2[i]=='o'|| name_2[i]=='u') ) flag = true;
                else if( name_1[i]!=name_2[i] )
                {
                    flag = false;
                    break;
                }
            }

            printf("%s\n", flag ? "Yes" : "No");
        }
        else if( strlen(name_1)!=strlen(name_2) ) printf("No\n");
    }
    return 0;
}
