#include <stdio.h>

int main()
{
	int tc, i, n, m, result;

    scanf("%d", &tc);
	for(i=1 ; i<=tc ; i++)
	{

	    scanf("%d %d", &n, &m);

        result = ((n/3)*(m/3));

		printf("%d\n", result);
	}
	return 0;
}
