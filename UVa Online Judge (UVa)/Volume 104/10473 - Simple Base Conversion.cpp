#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    char num[1005];

    while( cin >> num && num[0]!='-' )
    {
        long long decimal, index, hexadecimal;
        char hex[105];

        if( num[0]=='0' && num[1]=='x' )
        {
            decimal = 0;
            for(int i=2 ; i<strlen(num) ; i++)
            {
                if( num[i]=='A' ) decimal = (decimal*16)+10;
                else if( num[i]=='B' ) decimal = (decimal*16)+11;
                else if( num[i]=='C' ) decimal = (decimal*16)+12;
                else if( num[i]=='D' ) decimal = (decimal*16)+13;
                else if( num[i]=='E' ) decimal = (decimal*16)+14;
                else if( num[i]=='F' ) decimal = (decimal*16)+15;
                else decimal = (decimal*16)+(num[i]-'0');
            }

            cout << decimal << endl;
        }
        else
        {
            decimal = atoll(num), index = 0;
            while( decimal!=0 )
            {
                hexadecimal = decimal%16;
                decimal /= 16;

                if( hexadecimal==10 ) hex[index] = 'A';
                else if( hexadecimal==11 ) hex[index] = 'B';
                else if( hexadecimal==12 ) hex[index] = 'C';
                else if( hexadecimal==13 ) hex[index] = 'D';
                else if( hexadecimal==14 ) hex[index] = 'E';
                else if( hexadecimal==15 ) hex[index] = 'F';
                else hex[index] = hexadecimal+'0';

                ++index;
            }

            cout << "0x";
            for(int i=index-1 ; i>=0 ; i--)
                cout << hex[i];
            cout << endl;
        }
    }
    return 0;
}
