#include <stdio.h>

int main()
{
    float H, U, D, F;

    while( scanf("%f %f %f %f", &H, &U, &D, &F)==4 && H!=0.0 )
    {
        float fatigue_factor = U*(F/100.0);

        int day = 0;
        float temp = 0;
        while( 1 )
        {
            temp += U;
            day++;

            if( temp>H )
            {
                printf("success on day %d\n", day);
                break;
            }

            temp -= D;
            if( temp<0 && day>0 )
            {
                printf("failure on day %d\n", day);
                break;
            }

            U -= fatigue_factor;
            if( U<0 )
                U = 0;
        }
    }
    return 0;
}
