#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[101]; 
    char sen[101];
    scanf("%c ", &ch);
    scanf("%s ", s);
    scanf("%[^\n]%*c ", sen);
    
    printf("%c\n", ch);
    printf("%s\n%s", s, sen);
    return 0;
}
