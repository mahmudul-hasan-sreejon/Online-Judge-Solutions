#include <cstdio>
#include <algorithm>
 
using namespace std;
 
int tc, nCase, n, arr[105], counter;
 
int main()
{
    scanf("%d", &tc);
    nCase = 1;
    while( tc-- )
    {
        scanf("%d", &n);
        for(int i=0 ; i<n ; i++) scanf("%d", &arr[i]);
 
        counter = 0;
        for(int i=0 ; i<n ; i++)
            if( arr[i]!=(i+1) )
                for(int j=i+1 ; j<n ; j++)
                    if( arr[j]==(i+1) )
                    {
                        swap(arr[i], arr[j]);
                        counter++;
                    }
 
        printf("Case %d: %d\n", nCase, counter);
        nCase++;
    }
    return 0;
}