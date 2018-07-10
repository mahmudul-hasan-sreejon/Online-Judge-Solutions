#include <cstdio>

double c_x[6], c_y[6];

int main()
{
    while( scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &c_x[0], &c_y[0], &c_x[1], &c_y[1], &c_x[2], &c_y[2], &c_x[3], &c_y[3])!=EOF )
    {
        double x, y;

        bool flag = false;
        for(int i=0 ; i<4 ; i++)
        {
            for(int j=i+1 ; j<4 ; j++)
            {
                if( c_x[i]==c_x[j] && c_y[i]==c_y[j] )
                {
                    x = c_x[i], y = c_y[i];
                    flag = true;
                    break;
                }
            }
            if( flag ) break;
        }

        x = (c_x[0]+c_x[1]+c_x[2]+c_x[3])-(3*x);
        y = (c_y[0]+c_y[1]+c_y[2]+c_y[3])-(3*y);

        printf("%.3lf %.3lf\n", x, y);
    }
    return 0;
}
