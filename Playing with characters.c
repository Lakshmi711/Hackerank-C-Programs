#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    char ch;
    char str[45];
    char sentence[50];
    scanf("%c", &ch);
    scanf("%s", str);
    getchar();
    scanf("%[^\n]%*c", sentence);
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sentence);
    return 0;
}
