#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
 
using namespace std;
 
char code[55];
 
int main()
{
    while( gets(code) && strcmp(code, "#") )
        cout << (next_permutation(code, code+strlen(code)) ? code : "No Successor") << endl;
 
    return 0;
}