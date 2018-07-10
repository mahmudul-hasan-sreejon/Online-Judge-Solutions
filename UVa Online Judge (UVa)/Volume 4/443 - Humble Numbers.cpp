#include <cstdio>
#include <algorithm>

using namespace std;

const char suffix[6][4] = {"st", "nd", "rd", "th"};
long humbleNum[5845], suffixPos;
long n, pos2, pos3, pos5, pos7;

int main()
{
    humbleNum[1] = pos2 = pos3 = pos5 = pos7 = 1;
    for(long i=2 ; i<=5842 ; i++)
    {
        humbleNum[i] = min(min(2*humbleNum[pos2], 3*humbleNum[pos3]), min(5*humbleNum[pos5], 7*humbleNum[pos7]));
        if( humbleNum[i]==2*humbleNum[pos2] ) pos2++;
        if( humbleNum[i]==3*humbleNum[pos3] ) pos3++;
        if( humbleNum[i]==5*humbleNum[pos5] ) pos5++;
        if( humbleNum[i]==7*humbleNum[pos7] ) pos7++;
    }

    while( scanf("%ld", &n)==1 && n )
    {
        if( (n/10)%10!=1 && n%10==1 ) suffixPos = 0;
        else if( (n/10)%10!=1 && n%10==2 ) suffixPos = 1;
        else if( (n/10)%10!=1 && n%10==3 ) suffixPos = 2;
        else suffixPos = 3;

        printf("The %ld%s humble number is %ld.\n", n, suffix[suffixPos], humbleNum[n]);
    }
    return 0;
}
