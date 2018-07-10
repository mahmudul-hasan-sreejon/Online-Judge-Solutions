#include <stdio.h>

int main()
{
    char a[101];

	while( gets(a) )
    {
        printf("%s\n", a);
    }
	return 0;
}
