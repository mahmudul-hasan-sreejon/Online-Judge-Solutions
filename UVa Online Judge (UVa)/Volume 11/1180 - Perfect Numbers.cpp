#include <cstdio>
#include <iostream>

using namespace std;

int prime[] = {2, 3, 5, 7, 13, 17};

int bin_search(int num)
{
    for(int i=0 ; i<6 ; i++)
    {
        if( prime[i]==num )
            return 1;
    }
    return 0;
}

int main()
{
    int num_P;
    cin >> num_P;

    int flag[num_P];
    for(int i=0 ; i<num_P ; i++)
        flag[i] = 0;

    int P;
    for(int i=0 ; i<num_P ; i++)
    {
        cin >> P;

        if( bin_search(P)==1 )
            flag[i] = 1;

        getchar();
    }

    for(int i=0 ; i<num_P ; i++)
    {
        if( flag[i]==1 )
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
