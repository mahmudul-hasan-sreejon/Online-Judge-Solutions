#include <cstdio>
#include <cstring>

const char table[10][7] =
{
'-','|','|',' ','|','|','-',
' ','|',' ',' ','|',' ',' ',
'-','|',' ','-',' ','|','-',
'-','|',' ','-','|',' ','-',
' ','|','|','-','|',' ',' ',
'-',' ','|','-','|',' ','-',
'-',' ','|','-','|','|','-',
'-','|',' ',' ','|',' ',' ',
'-','|','|','-','|','|','-',
'-','|','|','-','|',' ','-',
};
int s, len, digit;
char n[11];

int main()
{
    while( scanf("%d %s", &s, n)==2 && s && n )
    {
		len = strlen(n);
		for(int i=0 ; i<2*s+3 ; i++)
        {
			for(int j=0 ; j<len ; j ++)
			{
				digit = n[j]-'0';
				if( !(i%(s + 1)) )
                {
					printf(" ");
					for(int k=0 ; k<s ; k++) printf("%c", table[digit][(i/(s + 1))*3]);
					printf(" ");
				}
				if( (i>0) && i<(s + 1) )
                {
					printf("%c", table[digit][2]);
					for(int k=0 ; k<s ; k++) printf(" ");
					printf("%c", table[digit][1]);
				}
				if( i>(s+1) && i<(2*s+2) )
                {
					printf("%c", table[digit][5]);
					for(int k=0 ; k<s ; k++) printf(" ");
					printf("%c", table[digit][4]);
				}
				if( j!=len-1 ) printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
