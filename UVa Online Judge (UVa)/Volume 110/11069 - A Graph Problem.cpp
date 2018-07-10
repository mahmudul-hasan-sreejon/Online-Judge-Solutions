#include <cstdio>
#include <iostream>

using namespace std;

int ans[80];

int main()
{
    ans[1] = 1, ans[2] = 2, ans[3] = 2;
    for(int i=4 ; i<80 ; i++)
        ans[i] = ans[i-2] + ans[i-3];

    int n;

    while( cin >> n )
        cout << ans[n] << endl;

    return 0;
}
