#include <stdio.h>

int main()
{
	int a, b, c, d, result;

	while( scanf("%d %d %d %d", &a, &b, &c, &d)!=EOF && a+b+c+d!=0 )
	{
        result = 1080;

		if( a<b )
            result += (40-b+a)*9;
		else
            result += (a-b)*9;
		if( b<c )
            result += (c-b)*9;
		else
            result += (40-b+c)*9;
		if( c<d )
            result += (40+c-d)*9;
		else
            result += (c-d)*9;

		printf("%d\n", result);
	}
	return 0;
}
