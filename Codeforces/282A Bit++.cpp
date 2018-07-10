#include <cstdio>
#include <cstring>

int n, x;
char statement[5];

int main()
{
    scanf("%d", &n);
    x = 0;
    while( n-- )
    {
        scanf("%s", statement);
        if( !strcmp(statement, "X++") || !strcmp(statement, "++X") ) x++;
        else if( !strcmp(statement, "--X") || !strcmp(statement, "X--") ) x--;
    }
    printf("%d\n", x);

    return 0;
}