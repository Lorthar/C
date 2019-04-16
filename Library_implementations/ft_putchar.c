/************************************************************************************************************************
 ********	file name:	ft_putchar.c									*********
 ********	Author:		Lorthar Mabandla								*********
 ********	Date:		23 March 2019									*********
 ********	Purpose:	Function to display characters on the screen.					*********
 ***********************************************************************************************************************/

#include<unistd.h>

int ft_putchar(int c){
	write(1,&c,1);
	return c;
}