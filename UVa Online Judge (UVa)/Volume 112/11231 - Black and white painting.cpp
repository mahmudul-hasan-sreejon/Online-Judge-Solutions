#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n, m, c;

    while( cin >> n >> m >> c && n+m+c!=0 )
    {
        int chess_board = ((n-7)*(m-7))/2;

        if( ((n-7)*(m-7))%2==1 && c==1 ) chess_board++;

        cout << chess_board << endl;
    }
    return 0;
}
