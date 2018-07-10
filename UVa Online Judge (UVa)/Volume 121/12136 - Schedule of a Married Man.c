#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    int ncase = 0;
    while( tc-- )
    {
        int wts_hh, wts_mm, wtf_hh, wtf_mm;
        scanf("%d:%d %d:%d", &wts_hh, &wts_mm, &wtf_hh, &wtf_mm);

        int mts_hh, mts_mm, mtf_hh, mtf_mm;
        scanf("%d:%d %d:%d", &mts_hh, &mts_mm, &mtf_hh, &mtf_mm);

        int wts_m1, wtf_m2, mts_m3, mtf_m4;

        wts_m1 = (wts_hh*60)+wts_mm;
        wtf_m2 = (wtf_hh*60)+wtf_mm;
        mts_m3 = (mts_hh*60)+mts_mm;
        mtf_m4 = (mtf_hh*60)+mtf_mm;

        if( wts_hh<wts_m1 && mtf_m4<wts_m1 )
        {
            if( mts_m3<wtf_m2 )
                printf("Case %d: Hits Meeting\n", ++ncase);
            else
                printf("Case %d: Mrs Meeting\n", ++ncase);
        }
        else if( wts_m1<mts_m3 && wts_m1<wtf_m2 )
        {
            if( wtf_m2<mts_m3 )
                printf("Case %d: Hits Meeting\n", ++ncase);
            else
                printf("Case %d: Mrs Meeting\n", ++ncase);
        }
        else
            printf("Case %d: Mrs Meeting\n", ++ncase);
    }
    return 0;
}
