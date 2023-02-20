#include	<stdio.h>

/**
	*	main	-	Entry	point
	*
	*	Return:	Always	0	(Success)
	*/

int	main(void)
{
		char	hex[]	=	"0123456789abcdef";	/*	Array	of	hexadecimal	characters	*/
		int	i;

		for	(i	=	0;	i	<	16;	i++)	/*	Loop	through	array	and	print	each	character	*/
		{
				putchar(hex[i]);
		}
		putchar('\n');	/*	Print	a	newline	character	*/

		return	(0);
}
