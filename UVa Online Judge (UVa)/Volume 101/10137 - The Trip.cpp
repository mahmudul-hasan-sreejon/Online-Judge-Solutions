#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

double money[1005];

int main()
{
    int n;

    while( cin >> n && n!=0 )
    {
        double total = 0.0;
        for(int i=0 ; i<n ; i++)
        {
            cin >> money[i];
            total += money[i];
        }

        double avg = total/n, neg_sum = 0.0, pos_sum = 0.0;
        for(int i=0 ; i<n ; i++)
        {
            double temp = (double)(long) ((money[i]-avg)*100.0)/100.0;

            if( temp<0 ) neg_sum -= temp;
            else pos_sum += temp;
        }

        cout << "$" << fixed << setprecision(2) << ( neg_sum>pos_sum ? neg_sum : pos_sum ) << endl;
    }
    return 0;
}
