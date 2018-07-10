#include <cstdio>
#include <cstring>

char line[1005];

int main()
{
    gets(line);

    for(int i=0 ; i<strlen(line) ; i++)
    {
        if( line[i]=='2' ) printf("`");
        else if( line[i]=='3' ) printf("1");
        else if( line[i]=='4' ) printf("2");
        else if( line[i]=='5' ) printf("3");
        else if( line[i]=='6' ) printf("4");
        else if( line[i]=='7' ) printf("5");
        else if( line[i]=='8' ) printf("6");
        else if( line[i]=='9' ) printf("7");
        else if( line[i]=='0' ) printf("8");
        else if( line[i]=='-' ) printf("9");
        else if( line[i]=='=' ) printf("0");
        else if( line[i]=='e' || line[i]=='E' ) printf("q");
        else if( line[i]=='r' || line[i]=='R' ) printf("w");
        else if( line[i]=='t' || line[i]=='T' ) printf("e");
        else if( line[i]=='y' || line[i]=='Y' ) printf("r");
        else if( line[i]=='u' || line[i]=='U' ) printf("t");
        else if( line[i]=='i' || line[i]=='I' ) printf("y");
        else if( line[i]=='o' || line[i]=='O' ) printf("u");
        else if( line[i]=='p' || line[i]=='P' ) printf("i");
        else if( line[i]=='[' || line[i]=='{' ) printf("o");
        else if( line[i]==']' || line[i]=='}' ) printf("p");
        else if( line[i]=='\'' || line[i]=='|' ) printf("l");
        else if( line[i]=='d' || line[i]=='D' ) printf("a");
        else if( line[i]=='f' || line[i]=='F' ) printf("s");
        else if( line[i]=='g' || line[i]=='G' ) printf("d");
        else if( line[i]=='h' || line[i]=='H' ) printf("f");
        else if( line[i]=='j' || line[i]=='J' ) printf("g");
        else if( line[i]=='k' || line[i]=='K' ) printf("h");
        else if( line[i]=='l' || line[i]=='L' ) printf("j");
        else if( line[i]==';' || line[i]==':' ) printf("k");
        else if( line[i]==39 || line[i]=='"' ) printf("l");
        else if( line[i]=='c' || line[i]=='C' ) printf("z");
        else if( line[i]=='v' || line[i]=='V' ) printf("x");
        else if( line[i]=='b' || line[i]=='B' ) printf("c");
        else if( line[i]=='n' || line[i]=='N' ) printf("v");
        else if( line[i]=='m' || line[i]=='M' ) printf("b");
        else if( line[i]==',' || line[i]=='<' ) printf("n");
        else if( line[i]=='.' || line[i]=='>' ) printf("m");
        else if( line[i]=='/' || line[i]=='?' ) printf(",");
        else printf("%c", line[i]);
    }
    printf("\n");

    return 0;
}
