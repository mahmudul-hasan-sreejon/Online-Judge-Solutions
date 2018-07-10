#include <cstdio>
#include <iostream>

using namespace std;

int last_card[500005];

int main()
{
    last_card[0] = 0;
    last_card[1] = 1;
    last_card[2] = 2;

    int card = 2;
    for(int i=3 ; i<500005 ; i++)
    {
        if( i<card ) card = 2;
        last_card[i] = card;
        card += 2;
    }

    int n;

    while( cin >> n && n )
        cout << last_card[n] << endl;

    return 0;
}
