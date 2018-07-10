#include <cstdio>
#include <iostream>

using namespace std;

int dec_bin(int a)
{
    int temp, one = 0;
    while( a!=0 )
    {
        temp = a%2;
        a /= 2;

        if( temp==1 ) ++one;
    }
    return one;
}

int hex_bin(int a)
{
    int temp, one = 0;
    while( a!=0 )
    {
        temp = a%10;
        a /= 10;

        if( temp==1 || temp==2 || temp==4 || temp==8 ) ++one;
        else if( temp==3 || temp==5 || temp==6 || temp==9 ) one += 2;
        else if( temp==7 ) one += 3;
    }
    return one;
}

int main()
{
    int tc;

    cin >> tc;
    while( tc-- )
    {
        int M;
        cin >> M;

        int b1 = dec_bin(M);
        int b2 = hex_bin(M);

        cout << b1 << " " << b2 << endl;
    }
    return 0;
}
