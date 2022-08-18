#include <stdio.h>

int main()
{
    int i=0;
    char str[1000];

    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]== '"')
        {
            str[i]='``';
        }

        i++;
    }

    printf("%s\n", str);

    return 0;
}
