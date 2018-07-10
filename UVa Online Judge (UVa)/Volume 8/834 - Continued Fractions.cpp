#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int numerator, denominator;

    while( cin >> numerator >> denominator )
    {
        cout << "[" << numerator/denominator << ";";

        numerator %= denominator;
        swap(numerator, denominator);

        for(int i=0 ; i<numerator ; i++)
        {
            if( i>0 ) cout << ",";
            cout << numerator/denominator;

            numerator %= denominator;
            swap(numerator, denominator);
        }
        cout << "]" << endl;
    }
    return 0;
}
