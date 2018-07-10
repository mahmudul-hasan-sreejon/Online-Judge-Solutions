#include <cstdio>
#include <cstring>

#define MOD 1000

int RAM[1000][3], Register[10];
char input[5], flag = '0';

int main()
{
    int tc;

    scanf("%d\n", &tc);
    while( tc-- )
    {
        memset(RAM, 0, sizeof(RAM));
        memset(Register, 0, sizeof(Register));

        for(int i=0 ; gets(input) && input[0] ; i++)
        {
            RAM[i][0] = input[0]-'0';
            RAM[i][1] = input[1]-'0';
            RAM[i][2] = input[2]-'0';
        }

        int nInstruction = 1;
        for(int i=0 ;  ; i++)
        {
            if( RAM[i][0]==1 && RAM[i][1]==0 && RAM[i][2]==0 ) break;
            else if( RAM[i][0]==2 ) Register[RAM[i][1]] = RAM[i][2];
            else if( RAM[i][0]==3 ) Register[RAM[i][1]] = (RAM[i][2]+Register[RAM[i][1]])%MOD;
            else if( RAM[i][0]==4 ) Register[RAM[i][1]] = (Register[RAM[i][1]]*RAM[i][2])%MOD;
            else if( RAM[i][0]==5 ) Register[RAM[i][1]] = Register[RAM[i][2]];
            else if( RAM[i][0]==6 ) Register[RAM[i][1]] = (Register[RAM[i][2]]+Register[RAM[i][1]])%MOD;
            else if( RAM[i][0]==7 ) Register[RAM[i][1]] = (Register[RAM[i][1]]*Register[RAM[i][2]])%MOD;
            else if( RAM[i][0]==8 )
            {
                int a = Register[RAM[i][2]];
                Register[RAM[i][1]] = (100*RAM[a][0]) + (10*RAM[a][1]) + RAM[a][2];
            }
            else if( RAM[i][0]==9 )
            {
                int a = Register[RAM[i][2]];
                RAM[a][0] = Register[RAM[i][1]]/100;
                RAM[a][1] = (Register[RAM[i][1]]%100)/10;
                RAM[a][2] = Register[RAM[i][1]]%10;
            }
            else if( RAM[i][0]==0 && Register[RAM[i][2]] ) i = Register[RAM[i][1]] - 1;

            nInstruction++;
        }

        if( flag=='1' ) printf("\n");
        flag = '1';
        printf("%d\n", nInstruction);
    }
    return 0;
}