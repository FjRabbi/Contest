#include <stdio.h>

int main()
{
    int H,U,D,F, day=0;
    float factor,height_up,strength,days_output=0,output;

    while(1)
    {
        scanf("%d %d %d %d", &H,&U,&D,&F);

        factor = (U*((float)F/100.0));

        //Di=D+factor;
        strength= U;

        if(H==0)
        {
            break;
        }
        else
        {
            while(days_output<H && strength>0)
            {

                //strength= strength-factor;
                //days_output = days_output+strength;
                if(day>=2)
                {
                    height_up = days_output + strength;
                    days_output = height_up - D;
                }
                else
                {

                    days_output = strength - D;
                }

                strength = strength - factor;

                day++;

            }
        }

        if(days_output>H)
        {
            printf("success on day %d\n", day);
        }
        else if(strength<0)
        {
            day++;
            printf("failure on day %d", day);
        }


        return 0;
    }
}
