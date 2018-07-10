#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char line[1005];

    while( cin >> line )
    {
        int len = strlen(line);

        bool palindrome_flag;
        for(int i=0 ; i<len ; i++)
        {
            if( line[i]==line[len-1-i] ) palindrome_flag = true;
            else
            {
                palindrome_flag = false;
                break;
            }
        }

        bool mirror_flag;
        for(int i=0 ; i<len ; i++)
        {
            if( line[i]=='A' && line[len-1-i]=='A' ) mirror_flag = true;
            else if( (line[i]=='E' && line[len-1-i]=='3') || (line[i]=='3' && line[len-1-i]=='E') ) mirror_flag = true;
            else if( line[i]=='H' && line[len-1-i]=='H' ) mirror_flag = true;
            else if( line[i]=='I' && line[len-1-i]=='I' ) mirror_flag = true;
            else if( (line[i]=='J' && line[len-1-i]=='L') || (line[i]=='L' && line[len-1-i]=='J') ) mirror_flag = true;
            else if( line[i]=='M' && line[len-1-i]=='M' ) mirror_flag = true;
            else if( line[i]=='O' && line[len-1-i]=='O' ) mirror_flag = true;
            else if( (line[i]=='S' && line[len-1-i]=='2') || (line[i]=='2' && line[len-1-i]=='S') ) mirror_flag = true;
            else if( line[i]=='T' && line[len-1-i]=='T' ) mirror_flag = true;
            else if( line[i]=='U' && line[len-1-i]=='U' ) mirror_flag = true;
            else if( line[i]=='V' && line[len-1-i]=='V' ) mirror_flag = true;
            else if( line[i]=='W' && line[len-1-i]=='W' ) mirror_flag = true;
            else if( line[i]=='X' && line[len-1-i]=='X' ) mirror_flag = true;
            else if( line[i]=='Y' && line[len-1-i]=='Y' ) mirror_flag = true;
            else if( (line[i]=='Z' && line[len-1-i]=='5') || (line[i]=='5' && line[len-1-i]=='Z') ) mirror_flag = true;
            else if( line[i]=='1' && line[len-1-i]=='1' ) mirror_flag = true;
            else if( line[i]=='8' && line[len-1-i]=='8' ) mirror_flag = true;
            else
            {
                mirror_flag = false;
                break;
            }
        }

        if( palindrome_flag==false && mirror_flag==false ) cout << line << " -- is not a palindrome.\n" << endl;
        else if( palindrome_flag==true && mirror_flag==false ) cout << line << " -- is a regular palindrome.\n" << endl;
        else if( palindrome_flag==false && mirror_flag==true ) cout << line << " -- is a mirrored string.\n" << endl;
        else cout << line << " -- is a mirrored palindrome.\n" << endl;
    }
    return 0;
}
