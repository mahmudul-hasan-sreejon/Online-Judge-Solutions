#include <cstdio>
#include <cstring>

int char_count[30];

unsigned long long factorial(int num)
{
    unsigned long long fact = 1;
    for(int i=2 ; i<=num ; i++)
        fact *= i;

    return fact;
}

int main()
{
    int tc, ncase;
    char dump;

    scanf("%d%c", &tc, &dump);
    ncase = 0;
    while( tc-- )
    {
        char word[25];
        gets(word);

        for(int i=0 ; i<30 ; i++) char_count[i] = 0;

        int len = strlen(word);
        for(int i=0 ; i<len ; i++)
            if( word[i]>='A' && word[i]<='Z' ) char_count[word[i]-'A']++;

        unsigned long long ans = factorial(len);
        for(int i=0 ; i<26 ; i++)
            if( char_count[i]>=2 ) ans /= factorial(char_count[i]);

        printf("Data set %d: %llu\n", ++ncase, ans);
    }
    return 0;
}
