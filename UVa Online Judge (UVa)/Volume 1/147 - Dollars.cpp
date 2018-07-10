#include <cstdio>
 
const int SZ = 30005;
long nway[SZ];
const int coin[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5};
 
int main()
{
    nway[0] = 1;
    for(int i=0 ; i<11 ; i++)
    {
        int c = coin[i];
        for(int j=c ; j<30005 ; j++) nway[j] += nway[j-c];
    }
 
    int num1, num2;
 
    while( scanf("%d.%d", &num1, &num2)==2 && (num1 || num2) )
    {
        int n = (num1*100)+num2;
        printf("%3d.%.2d%17ld\n", num1, num2, nway[n]);
    }
    return 0;
}