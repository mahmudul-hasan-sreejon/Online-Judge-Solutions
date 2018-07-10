#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char line[1000];

    while( cin >> line )
    {
        for(int i=0 ; i<strlen(line) ; i++)
            line[i] = line[i]-7;

        cout << line << endl;
    }
    return 0;
}
