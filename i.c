#include <stdio.h>

void main( void )
{
	char a[101];

	while( gets(a) != '\0' ){
		printf("%s\n",a);
	}
}
