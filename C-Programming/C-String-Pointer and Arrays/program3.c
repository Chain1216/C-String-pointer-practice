/*************************************************************************/
/* File Name : program3.c 											     */
/* Purpose   :                                                           */
/*                                                                       */
/*                                                                       */
/* Author(s) : Zhaoqin Wu											     */
/*************************************************************************/

#include <stdio.h>
#include <string.h>
#include "my_string.h"

int main (int argc, char** argv) {

	int count = 0 ;
	int Find_int ;
	int Store_int ;
	int int_array[argc] ;
	char Str_array[250] = "" ;
	char* ptr = Str_array ;

	for (int j = 0; j < argc ; j++) {
		// Check if the argument is an integer
		Find_int = sscanf(argv[j], "%d", &Store_int) ;
		if (Find_int) {
			int_array[count] = Store_int ;
			count++ ;
		} else {
			// Otherwise, store a string
			ptr += sprintf(ptr, "%s ", argv[j]);
		}
	}

	for (int i=0; i< count ; i++) {
        // print the intergers only
		printf ( "%d \n", int_array[i]) ;
	}

	// Remove the leading "\."
    int string_len = my_strlen(Str_array) - 2 ;
	for (int z = 0; z <= string_len ; z++) {
		Str_array[z] = Str_array[z+2] ;
	}


	// print the string only
	printf("%s \n", Str_array);
	

	return (0) ;

}