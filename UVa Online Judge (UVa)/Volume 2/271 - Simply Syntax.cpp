#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

int len;
char sentence[260];
bool flag;
stack < char > check;

int main()
{
    while( scanf("%s", sentence)!=EOF )
    {
        while( !check.empty() ) check.pop();

        len = strlen(sentence)-1, flag = true;
        for(int i=len ; i>=0 ; i--)
        {
            if( sentence[i]>='p' && sentence[i]<='z' ) check.push(sentence[i]);
            else if( sentence[i]=='N' && !check.size() ) flag = false;
            else if( sentence[i]=='C' || sentence[i]=='D' || sentence[i]=='E' || sentence[i]=='I' )
                if( 2<=check.size() ) check.pop();
                else flag = false;
            if( !flag ) break;
        }

        if( flag && check.size()==1 ) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}