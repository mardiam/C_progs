#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char seq[3000];
    int length;
    int i;
    int count;

    count = 0;
    scanf("%s", seq);
    length = strlen(seq);
    for (i=0; i<length; i++)
    {
        if (seq[i] == 'G' || seq[i] == 'C')
        {
            count++;
        }
    }    
    printf("=> %f\n", (100.0*count)/length);
}