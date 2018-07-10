#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tc, counter;

    cin >> tc;
    counter = 1;
    while( tc-- )
    {
        int a;
        string s;
        cin >> a >> s;

        int b = s.length()>3 ? (int) s[3]-'0' : 0;

        cout << "Case " << counter++ << ": " << (a*0.5)+(b*0.05) << endl;
    }
    return 0;
}
