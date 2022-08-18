#include <stdio.h>

int main()
{
    char ch[1000];
    int z,i;

    gets(ch);

    z=strlen(ch);

    for(i=0; i<z; i++)
    {
        printf("%c",ch[i]);

        if(ch[i]==' ')
        {
            printf("\n");
        }
    }

    return 0;
}
