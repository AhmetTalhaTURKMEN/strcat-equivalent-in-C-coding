#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char metin1[100],metin2[100];

    printf("First text:");
    gets(metin1);

    printf("Second text:");
    gets(metin2);

    int a=strlen(metin1);
    int b=strlen(metin2);

    char *birlesik=(char *)malloc((a+b+1)*sizeof(char));

    strcpy(birlesik,metin1);

    strcpy(birlesik+a,metin2);

    puts(metin1);
    puts(metin2);
    puts(birlesik);

    return 0;
}
