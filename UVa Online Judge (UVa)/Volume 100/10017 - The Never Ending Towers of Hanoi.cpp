#include <bits/stdc++.h>

using namespace std;

int n, m, nCase = 1;
vector <int> A, B, C;

void printHanoi()
{
    int aLen = A.size(), bLen = B.size(), cLen = C.size();

    printf("A=>");
    if( aLen )
    {
        printf("  ");
        for(int i=0 ; i<aLen ; i++) printf(" %d", A[i]);
    }

    printf("\nB=>");
    if( bLen )
    {
        printf("  ");
        for(int i=0 ; i<bLen ; i++) printf(" %d", B[i]);
    }

    printf("\nC=>");
    if( cLen )
    {
        printf("  ");
        for(int i=0 ; i<cLen ; i++) printf(" %d", C[i]);
    }
    printf("\n\n");
}

void towersOfHanoi(int n, vector <int> &A, vector <int> &B, vector <int> &C)
{
    if( !m ) return;
    if( n==1 )
    {
        C.push_back(A.back());
        A.pop_back();
        printHanoi();
        m--;
        return;
    }
    towersOfHanoi(n-1, A, C, B);
    if( !m ) return;
    C.push_back(A.back());
    A.pop_back();
    printHanoi();
    m--;
    if( !m ) return;
    towersOfHanoi(n-1, B, A, C);
}

int main()
{
    while( scanf("%d %d", &n, &m)==2 && (n || m) )
    {
        A.clear(), B.clear(), C.clear();
        for(int i=n ; i>=1 ; i--) A.push_back(i);

        printf("Problem #%d\n\n", nCase);
        printHanoi();
        towersOfHanoi(n, A, B, C);
        nCase++;
    }
    return 0;
}
