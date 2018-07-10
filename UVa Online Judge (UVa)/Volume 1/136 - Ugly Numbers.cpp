#include <cstdio>
#include <algorithm>
 
using namespace std;
 
int ugly[1502];
int p2, p3, p5;
 
int main()
{
    ugly[1] = p2 = p3 = p5 = 1;
    for(int i=2 ; i<=1500 ; i++)
    {
        ugly[i] = min(min(2*ugly[p2], 3*ugly[p3]), 5*ugly[p5]);
        if( ugly[i]==2*ugly[p2] ) p2++;
        if( ugly[i]==3*ugly[p3] ) p3++;
        if( ugly[i]==5*ugly[p5] ) p5++;
    }
 
    printf("The 1500'th ugly number is %d.\n", ugly[1500]);
 
    return 0;
}