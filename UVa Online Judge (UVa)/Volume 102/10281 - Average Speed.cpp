#include <cstdio>

char line[100005];
int hh, mm, ss, newSpeed;
int temp, sec, sec1;
double dis, speed;

int main()
{
    dis = 0.0, sec1 = 0, speed = 0.0;
    while( gets(line) )
    {
        temp = sscanf(line, "%d:%d:%d %d", &hh, &mm, &ss, &newSpeed);

        sec = (hh*3600)+(mm*60)+ss;
        dis += ((sec-sec1)*speed)/3600.0;
        sec1 = sec;

        if( temp==4 ) speed = newSpeed;
        else printf("%.2d:%.2d:%.2d %.2lf km\n", hh, mm, ss, dis);
    }
    return 0;
}
