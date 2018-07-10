#include <stdio.h>

int main()
{
    float H, M;

    while( scanf("%f:%f", &H, &M)==2 && H+M!=0.0 )
    {
        float hour_hand;

        if( H>0 && H<12 )
            hour_hand = (H*30+M*.5);
        else if( H==12 )
            hour_hand = (H*0+M*.5);

        float minute_hand = M*6;

        float deg = hour_hand-minute_hand;

        if( deg<0 )
            deg *= -1;

        if( deg>180 )
            deg = 360-deg;

        printf("%.3f\n", deg);
    }
    return 0;
}
