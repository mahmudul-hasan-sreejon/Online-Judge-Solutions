#include <cstdio>
 
int arr[105][105];
 
int main()
{
    int N;
 
    while( scanf("%d", &N)!=EOF )
    {
        for(int i=0 ; i<N ; i++)
            for(int j=0 ; j<N ; j++) scanf("%d", &arr[i][j]);
 
        for(int i=0 ; i<N ; i++)
            for(int j=0 ; j<N ; j++) arr[i][j] += arr[i-1][j];
 
        int sum = arr[1][0], temp;
        for(int i=0 ; i<N ; i++)
            for(int j=0 ; j<N-i ; j++)
            {
                temp = 0;
                for(int k=0 ; k<N ; k++)
                {
                    if( temp<0 )temp = (arr[j+i][k] - arr[j][k]);
                    else temp += (arr[j+i][k] - arr[j][k]);
 
                    if( temp>sum ) sum = temp;
                }
            }
 
        printf("%d\n", sum);
    }
    return 0;
}