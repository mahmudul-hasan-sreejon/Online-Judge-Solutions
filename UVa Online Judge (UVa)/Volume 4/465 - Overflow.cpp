#include <cstdio>

const long MAX = 2147483647;
char expression[505], sign;
double num1, num2, res;

int main()
{
    while( gets(expression) )
    {
        sscanf(expression, "%lf %c %lf", &num1, &sign, &num2);

        if( sign=='+' ) res = num1+num2;
        else res = num1*num2;

        printf("%s\n", expression);
        if( num1>MAX ) printf("first number too big\n");
        if( num2>MAX ) printf("second number too big\n");
        if( res>MAX ) printf("result too big\n");
    }
    return 0;
}
