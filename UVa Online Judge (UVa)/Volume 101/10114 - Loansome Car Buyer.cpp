#include <cstdio>
#include <iostream>

using namespace std;

double depreciation[105];

int main()
{
    double month, payment, borrow, d, car_value;

    while( cin >> month >> payment >> borrow >> d && month>=0.0 )
    {
        for(int i=0 ; i<105 ; i++) depreciation[i] = -1;

        while( d-- )
        {
            int drop_val_mon;
            cin >> drop_val_mon;
            cin >> depreciation[drop_val_mon];
        }

        double car_value = payment+borrow, pay = borrow/month;

        for(int i=0 ; i<=month ; i++)
        {
            if( depreciation[i]==-1 ) depreciation[i] = depreciation[i-1];

            car_value *= (1-depreciation[i]);

            if( car_value>=borrow )
            {
                cout << i << " month" << (i!=1 ? "s" : "") << endl;
                break;
            }

            borrow -= pay;
        }
    }
    return 0;
}
