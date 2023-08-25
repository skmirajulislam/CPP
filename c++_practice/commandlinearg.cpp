#include <stdio.h>
int main(int argc, char *argv[])
{
    int i;
    printf("\nThe value of argv %s", argv[0]);
    printf("\nThe value of argc %d\n", argc);
    for(i=1;i<argc;i++)
    {
        printf("%s\v",argv[i]);
    }
    return 0;
}
