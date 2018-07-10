#include <cstdio>
#include <cstring>

char sentence[1055];

int main()
{
    while( gets(sentence) && strcmp(sentence, "*") )
    {
        if( sentence[0]>='A' && sentence[0]<='Z' ) sentence[0] = 'a'+sentence[0]-'A';

        bool flag = true;
        int counter = 0;
        for(int i=1 ; i<strlen(sentence) ; i++)
        {
            if( sentence[i]==' ' )
            {
                counter++;
                if( sentence[i+1]>='A' && sentence[i+1]<='Z' ) sentence[i+1] = 'a'+sentence[i+1]-'A';

                if( sentence[0]==sentence[i+1] ) flag = true;
                else if( sentence[0]!=sentence[i+1] ) flag = false;
            }
            if( !flag ) break;
        }

        printf("%s\n", (flag || !counter) ? "Y" : "N");
    }
    return 0;
}
