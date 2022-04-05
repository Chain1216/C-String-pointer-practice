/*************************************************************************/
/* File Name : program2.c 											     */
/* Purpose   : this C-file tests the functions of the "my_string" library*/
/*                                                                       */
/*                                                                       */
/* Author(s) : Zhaoqin Wu											     */
/*************************************************************************/

#include <stdio.h>
#include <string.h>
#include "my_string.h"

int main() {

	// This is to test the function of my_strrev

	char test[50] = "AAAAA BBBBB CCCCC";
	printf ("Here is the string: \"%s\" \n", test) ;

	char *ptr = my_strrev(test);
	printf ("Here is the reversed string: \"%s\" \n", test) ;

	//Check if the pointer = address

	printf ("Pointer of the reversed string \"%p\" = Address of the start of the reversed string: \"%p\" \n", ptr, &test[0]) ;


	// This is to test the function of my_strccase

	char letter[50] = "WDAWFAF FORGKGH asd feifn" ;
	printf ("Here is the string: \"%s\" \n", letter) ;
	char* test_1 = my_strccase(letter) ;
	printf("converted each character in the string: \"%s\" \n", letter) ;

	//Check if the pointer = address

	printf ("Pointer of the converted string \"%p\" = Address of the start of the converted string: \"%p\" \n", test_1, &letter[0]) ;


	return (0) ;

}
