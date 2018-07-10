#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

bool descend(char a, char b)
{
	return (a>b);
}

int main()
{
    char a[500];

    while( cin >> a )
    {
        int len = strlen(a);

        sort(a, a+len, descend);

        char b[500];
        strcpy(b, a);

        sort(a, a+len);

        int i;
        for(i=0 ; i<len ; i++)
            if( a[i]!='0' )
                break;

        swap(a[0], a[i]);

        long long sub = atoll(b) - atoll(a);

        cout << b << " - " << a << " = " << sub << " = 9 * " << sub/9 << endl;
    }
    return 0;
}
