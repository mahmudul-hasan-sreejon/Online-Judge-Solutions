#include <cstdio>
#include <iostream>

using namespace std;

bool digit_check(int num)
{
    int digit[10];
    for(int i=0 ; i<10 ; i++) digit[i] = 0;

    while( num!=0 )
    {
        if( digit[num%10]!=0 ) return true;
        digit[num%10] = 1;
        num /= 10;
    }
    return false;
}

int main()
{
    int N, M;

    while( cin >> N >> M )
    {
        int counter = 0;
        for(int i=N ; i<=M ; i++)
            if( digit_check(i)==false )
                counter++;

        cout << counter << endl;
    }
    return 0;
}
