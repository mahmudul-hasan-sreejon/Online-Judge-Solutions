#include <cstdio>
#include <iostream>
#include <map>
#include <string>

using namespace std;

#define MAX 9951
#define Min(a, b) ((a<b)?(a):(b))
#define Max(a, b) ((a>b)?(a):(b))

int wght[MAX][MAX];

int main()
{
    int n, r, nCase = 1;
    while( scanf("%d %d", &n, &r)==2 && (n || r) )
    {
        map <string, int> city;

        for(int i=0 ; i<MAX ; i++)
            for(int j=0 ; j<MAX ; j++) wght[i][j] = 0;

        int index = 1;
        for(int i=1 ; i<=r ; i++)
        {
            string str1, str2;
            int weightLimit;
            cin >> str1 >> str2 >> weightLimit;

            if( !city[str1] ) city[str1] = index, index++;
            if( !city[str2] ) city[str2] = index, index++;

            wght[city[str1]][city[str2]] = wght[city[str2]][city[str1]] = weightLimit;
        }

        for(int k=1 ; k<=n ; k++)
            for(int i=1 ; i<=n ; i++)
                for(int j=1 ; j<=n ; j++)
                    wght[i][j] = Max(wght[i][j], Min(wght[i][k], wght[k][j]));

        string start, destination;
        cin >> start >> destination;

        printf("Scenario #%d\n%d tons\n\n", nCase, wght[city[start]][city[destination]]);
        nCase++;
    }
    return 0;
}