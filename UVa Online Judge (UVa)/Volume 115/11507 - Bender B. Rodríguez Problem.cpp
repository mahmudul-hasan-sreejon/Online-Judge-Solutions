#include <cstdio>
#include <iostream>

using namespace std;

bool change(char a, char s, char a2)
{
    if(a == 'x' && s == '-') return true;
    if(a == 'y' && a2 == 'y' && s == '+') return true;
    if(a == 'z' && a2 == 'z' && s == '+') return true;
    return false;
}

int main()
{
    int L;

    while( cin >> L && L )
    {
        --L;

        int sign = 1;
        char axis = 'x';

        for(int i=0 ; i<L ; ++i)
        {
            char decision[3];
            cin >> decision;

            if( decision[0]=='N' ) continue;

            if( change(axis, decision[0], decision[1]) ) sign *= -1;

            if(axis == 'x') axis = decision[1];
            else if(axis == 'y' && decision[1] == 'y') axis = 'x';
            else if(axis == 'z' && decision[1] == 'z') axis = 'x';
        }

        cout << (sign==1 ? '+' : '-') << axis << endl;
    }
    return 0;
}
