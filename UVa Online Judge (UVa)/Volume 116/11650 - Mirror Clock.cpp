#include <cstdio>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int HH, MM;
        scanf("%d:%d", &HH, &MM);

        HH = 11-HH;
        if( !MM ) HH++;
        if( HH<=0 ) HH += 12;
        if( MM ) MM = 60-MM;

        printf("%02d:%02d\n", HH, MM);
    }
    return 0;
}
