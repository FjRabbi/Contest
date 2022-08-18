#include <stdio.h>

struct student
{
    char name[10];
    int roll;
    int marks;

};
int main()
{
    int N;
    scanf("%d", &N);

    struct student st[N];

    int i,j;

    for(i=0; i<N; i++)
    {
        scanf("%d", &st[i].roll);
        scanf("%s", &st[i].name);
        scanf("%d", &st[i].marks);
    }


}
