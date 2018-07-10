#include <cstdio>
#include <algorithm>

using namespace std;

long num[5005];

int main()
{
    int N;

    while( scanf("%d", &N)==1 && N )
    {
        for(int i=0 ; i<N ; i++) scanf("%d", &num[i]);

        sort(num, num+N);

        long cost = 0;
        for(int i=1 ; i<N ; i++)
        {
            num[i] += num[i-1];
            cost += num[i];
            for(int j=i+1 ; j<N ; j++)
            {
                if( num[j-1]<num[j] ) break;
                else swap(num[j], num[j-1]);
            }
        }

        printf("%ld\n", cost);
    }
    return 0;
}
