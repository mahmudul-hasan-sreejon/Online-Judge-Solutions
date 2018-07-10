#include <stdio.h>

int main()
{
    int a, b;

    while( scanf("%d %d", &a, &b)==2 && a+b!=-2 )
    {
        int button_press;
        if( a>b )
            button_press = a-b;
        else
            button_press = b-a;

        if( button_press>50 )
            button_press = 100-button_press;

        printf("%d\n", button_press);
    }
    return 0;
}
