#include <cstdio>

int main()
{
    long long n, m, a;
    scanf("%I64d %I64d %I64d", &n, &m, &a);

    long long row = n/a;
    if( n%a ) row++;
    long long column = m/a;
    if( m%a ) column++;
    long long result = row*column;

    printf("%I64d\n", result);

    return 0;
}