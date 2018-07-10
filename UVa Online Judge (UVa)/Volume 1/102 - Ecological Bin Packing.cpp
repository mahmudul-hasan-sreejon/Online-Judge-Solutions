#include <cstdio>
 
const char combination[8][5] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
int b1, g1, c1, b2, g2, c2, b3, g3, c3;
int movement, pos, temp;
 
int main()
{
    while( scanf("%d %d %d %d %d %d %d %d %d", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3)!=EOF )
    {
        movement = (g1+c1)+(b2+g2)+(b3+c3), pos = 0;
 
        temp = (g1+c1)+(b2+c2)+(b3+g3);
        if( movement>temp ) movement = temp, pos = 1;
 
        temp = (b1+g1)+(g2+c2)+(b3+c3);
        if( movement>temp ) movement = temp, pos = 2;
 
        temp = (b1+g1)+(b2+c2)+(g3+c3);
        if( movement>temp ) movement = temp, pos = 3;
 
        temp = (b1+c1)+(g2+c2)+(b3+g3);
        if( movement>temp ) movement = temp, pos = 4;
 
        temp = (b1+c1)+(b2+g2)+(g3+c3);
        if( movement>temp ) movement = temp, pos = 5;
 
        printf("%s %d\n", combination[pos], movement);
    }
    return 0;
}