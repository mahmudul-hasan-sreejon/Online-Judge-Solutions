#include <iostream>
#include <algorithm>

using namespace std;

bool isPrefix(string a, string b)
{
    int lenA = a.size(), lenB = b.size();
    if( lenA>lenB ) return false;
    for(int i=0 ; i<lenA ; i++)
        if( a[i]!=b[i] ) return false;
    return true;
}

int main()
{
    int tc;
    cin >> tc;
    while( tc-- )
    {
        int n;
        cin >> n;

        string str[10005];
        for(int i=0 ; i<n ; i++) cin >> str[i];

        sort(str, str+n);

        bool flag = true;
        for(int i=0 ; i<(n-1) ; i++)
            if( isPrefix(str[i], str[i+1]) )
            {
                flag = false;
                break;
            }

        if( flag ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}