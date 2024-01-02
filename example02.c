#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int length;
	int i, tot_seq = 0;
	char seq[10000];
	while (scanf("%s", seq ) == 1) 
	{
		tot_seq++;
		length = strlen(seq);
		for ( i=0 ; i<length ; i++ )
		{
			if (seq[ i ] == 'D' || seq[ i ] == 'E' || seq[ i ] == 'H' || seq[ i ] == 'K' || seq[ i ] == 'N' || seq[ i ] == 'Q' || seq[ i ] == 'R')
			{
				printf( " " );
			}
			
			else if (seq[ i ] == 'S' || seq[ i ] == 'T' || seq[ i ] == 'G')
			{
				printf ( "." );
			}
			else if (seq[ i ] == 'A' || seq[ i ] == 'C' || seq[ i ] == 'M' || seq[ i ] == 'P')
			{
				printf ( ":" );
			}
			else if (seq[ i ] == 'F' || seq[ i ] == 'I' || seq[ i ] == 'L' || seq[ i ] == 'V' || seq[ i ] == 'W' || seq[ i ] == 'Y' )
			{
				printf ( "*" );
			}
		}
		printf("\n");
	}
	printf("Found %d sequences\n", tot_seq);	
}
