#include <cstdio>
#include <cmath>
 
bool p[1000002];
 
unsigned GCD(unsigned a, unsigned b)
{
    while( b ) b ^= a ^= b ^= a %= b;
    return (a);
}
 
int main()
{
    unsigned N;
    while( scanf("%u", &N)!=EOF )
    {
        for(unsigned i=0 ; i<1000002 ; i++) p[i] = false;
 
        unsigned triple = 0, sqrtN = sqrt(N);
        for(unsigned x=1 ; x<=sqrtN ; x++)
            for(unsigned y=x+1 ; y<=sqrtN ; y+=2)
            {
                if( GCD(x, y)!=1 ) continue;
 
                unsigned c = (y*y) + (x*x);
                if( c>N ) break;
                unsigned a = (y*y) - (x*x);
                unsigned b = 2*x*y;
                triple++;
 
                unsigned newA = a, newB = b, newC = c;
                while( newC<=N )
                {
                    p[newA] = p[newB] = p[newC] = true;
                    newA += a;
                    newB += b;
                    newC += c;
                }
            }
 
        unsigned notTriple = 0;
        for(unsigned i=1 ; i<=N ; i++)
            if( !p[i] ) notTriple++;
 
        printf("%u %u\n", triple, notTriple);
    }
    return 0;
}