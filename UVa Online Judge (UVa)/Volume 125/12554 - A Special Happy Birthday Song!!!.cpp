#include <cstdio>

const char song[16][10] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
char name[100][105];

int main()
{
    int n;

    scanf("%d", &n);
    for(int i=0 ; i<n ; i++) scanf("%s", name[i]);

    int pos = 0;
    bool flag = false;
    while( !flag )
    {
        for(int i=0 ; i<16 ; i++)
        {
            printf("%s: %s\n", name[pos++], song[i]);
            if( pos==n )
            {
                flag = true;
                pos = 0;
            }
        }
    }

    return 0;
}
