#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

char solution[105], guess[105];
bool check[105];

int main()
{
    int round_num;

    while( cin >> round_num && round_num!=-1 )
    {
        cin >> solution;
        cin >> guess;

        cout << "Round " << round_num << endl;

        for(int i=0 ; i<105 ; i++) check[i] = false;

        bool flag = false;
        int counter = 0;
        for(int i=0 ; i<strlen(guess) ; i++)
        {
            for(int j=0 ; j<strlen(solution) ; j++)
            {
                if( guess[i]==solution[j] )
                {
                    flag = true;
                    check[j] = true;
                }
            }

            if( flag==false ) counter++;

            for(int j=0 ; j<strlen(solution) ; j++)
            {
                if( check[j]!=true )
                {
                    flag = false;
                    break;
                }
            }

            if( flag )
            {
                cout << "You win." << endl;
                break;
            }
            if( counter==7 )
            {
                cout << "You lose." << endl;
                break;
            }
        }

        if( flag==false && counter<7 ) cout << "You chickened out." << endl;
    }
    return 0;
}
