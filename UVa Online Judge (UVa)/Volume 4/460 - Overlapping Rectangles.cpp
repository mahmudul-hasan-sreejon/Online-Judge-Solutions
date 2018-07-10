#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int tc, new_line;

    scanf("%d", &tc);
    new_line = 0;
    while( tc-- )
    {
        int XLL_1, YLL_1, XUR_1, YUR_1, XLL_2, YLL_2, XUR_2, YUR_2;
        scanf("%d %d %d %d", &XLL_1, &YLL_1, &XUR_1, &YUR_1);
        scanf("%d %d %d %d", &XLL_2, &YLL_2, &XUR_2, &YUR_2);

        int XLL = max(XLL_1, XLL_2);
        int YLL = max(YLL_1, YLL_2);
        int XUR = min(XUR_1, XUR_2);
        int YUR = min(YUR_1, YUR_2);

        if( new_line ) printf("\n");
        new_line = 1;

        if( XUR<=XLL || YUR<=YLL ) printf("No Overlap\n");
        else printf("%d %d %d %d\n", XLL, YLL, XUR, YUR);
    }
    return 0;
}
