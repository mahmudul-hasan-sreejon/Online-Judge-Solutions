#include <cstdio>

int ans[105][7];
int n;

int main()
{
    for(int i=1 ; i<102 ; i++)
    {
        if( i%10==1 || i%10==4 || i%10==6 || i%10==9 ) ans[i][0]++;
        if( i%10==2 || i%10==7 ) ans[i][0] += 2;
        if( i%10==3 || i%10==8 ) ans[i][0] += 3;
        ans[i+1][0] = ans[i][0];

        if( i%10==4 || i%10==5 || i%10==6 || i%10==7 || i%10==8 ) ans[i][1]++;
        ans[i+1][1] = ans[i][1];

        if( (i>=9 && i<19) || (i>=40 && i<49) || (i>=59 && i<69) || (i>=90 && i<99) ) ans[i][2]++;
        if( (i>=19 && i<29) || (i>=69 && i<79) || i==49 || i==99 ) ans[i][2] += 2;
        if( (i>=29 && i<39) || (i>=79 && i<89) ) ans[i][2] += 3;
        if( i==39 || i==89 ) ans[i][2] += 4;
        ans[i+1][2] = ans[i][2];

        if( i>=40 && i<90 ) ans[i][3]++;
        ans[i+1][3] = ans[i][3];

        if( i>=90 ) ans[i][4]++;
        ans[i+1][4] = ans[i][4];
    }

    while( scanf("%d", &n)==1 && n )
        printf("%d: %d i, %d v, %d x, %d l, %d c\n", n, ans[n][0], ans[n][1], ans[n][2], ans[n][3], ans[n][4]);

    return 0;
}
