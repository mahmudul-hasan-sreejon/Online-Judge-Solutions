#include <stdio.h>
#include <string.h>

int main()
{
	int tc, i, l, j, result;
	char line[101], dump;

    scanf("%d%c", &tc, &dump);
	for(i=1 ; i<=tc ; i++)
	{
	    gets(line);

	    l = strlen(line);

	    result=0;
	    for(j=0 ; j<l ; j++)
        {
            if( line[j]=='a' || line[j]=='d' || line[j]=='g' || line[j]=='j' || line[j]=='m' || line[j]=='p' || line[j]=='t' || line[j]=='w' || line[j]==' ' )
                result += 1;
            else if( line[j]=='b' || line[j]=='e' || line[j]=='h' || line[j]=='k' || line[j]=='n' || line[j]=='q' || line[j]=='u' || line[j]=='x' )
                result += 2;
            else if( line[j]=='c' || line[j]=='f' || line[j]=='i' || line[j]=='l' || line[j]=='o' || line[j]=='r' || line[j]=='v' || line[j]=='y' )
                result += 3;
            else if( line[j]=='s' || line[j]=='z' )
                result += 4;
        }

		printf("Case #%d: %d\n", i, result);
	}
	return 0;
}
