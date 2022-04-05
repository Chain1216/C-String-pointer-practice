/*************************************************************************/
/* File Name : program1.c 											     */
/* Purpose   : this C-file tests the functions of the "my_string" library*/
/*                                                                       */
/*                                                                       */
/* Author(s) : tjf & you 											     */
/*************************************************************************/

#include <stdio.h>
#include <string.h>
#include "my_string.h"

int main() {

	// a string we will test with
	char my_string [100] = "Tom" ;

	// test of strlen() functions 
	printf ("Sample string: \"%s\" \n", my_string) ;
	printf (" string's length: strlen()     = %lu \n",   strlen  (my_string)) ;
	printf (" string's length: my_strlen()  = %lu \n", my_strlen (my_string)) ;
	printf (" string's length: my_strlen2() = %lu \n", my_strlen2(my_string)) ;

    /* CIT 593 students: TODO: add code to test your my_string.h functions */

	


	// test of strcpy() functions 
	char new_string [50] ;

	printf(" copy a string : strcpy()             = \"%s\" \n", strcpy(new_string, "Copied Content")) ;
	printf(" copy a string : my_strcpy()          = \"%s\" \n", my_strcpy(new_string, "Copied Content")) ;
	printf(" copy a string : my_strcpy2()         = \"%s\" \n", my_strcpy2(new_string, "Copied Content")) ;

    char string_copy [50] = "Content Received!" ;
	char string_1 [50] ;

	printf(" copy a string : strcpy()             = \"%s\" \n", strcpy(string_1, string_copy)) ;
	printf(" copy a string : my_strcpy()          = \"%s\" \n", my_strcpy(string_1, string_copy)) ;
	printf(" copy a string : my_strcpy2()         = \"%s\" \n", my_strcpy2(string_1, string_copy)) ;


	// test of strchr() functions

	char* str_new = "Happy Friday";
	int test1 = 'r';
	int test2 = 'O'; // This one does not exist in the string above

	char* Ptr1 = strchr(str_new, test1) ;
	char* Ptr2 = strchr(str_new, test2) ;
	char* Ptr3 = my_strchr(str_new, test1) ;
	char* Ptr4 = my_strchr(str_new, test2) ;
	char* Ptr5 = my_strchr2(str_new, test1) ;
	char* Ptr6 = my_strchr2(str_new, test2) ;

	printf("Result: String after \'%c\' in \"%s\" is  \"%s\". \n", test1, str_new, Ptr1) ;
	printf("Result: \"%s\" Found, \'%c\' is not in \"%s\". \n", Ptr2, test2, str_new) ;
	printf("Result: String after \'%c\' in \"%s\" is  \"%s\". \n", test1, str_new, Ptr3) ;
	printf("Result: \"%s\" Found, \'%c\' is not in \"%s\". \n", Ptr4, test2, str_new) ;
	printf("Result: String after  \'%c\' in \"%s\" is  \"%s\". \n", test1, str_new, Ptr5) ;
	printf("Result: \"%s\" Found, \'%c\' is not in \"%s\". \n", Ptr6, test2, str_new) ;

	// test strcat() functions

	char t2 [50], t1[50] ;
	char a2 [50], a1[50] ;
	char d2 [50], d1[50] ;

	my_strcpy(t1, "Connected");
	my_strcpy(t2, " Successfully!");
	strcpy(a1, "Connected");
	strcpy(a2, " Successfully!");
	my_strcpy2(d1, "Connected");
	my_strcpy2(d2, " Successfully!");

	printf("The status is     = \"%s\" \n", 	strcat(t1, t2)) ;
	printf("The status is     = \"%s\" \n", 	my_strcat2(a1, a2)) ;
	printf("The status is     = \"%s\" \n", 	my_strcat(d1, d2)) ;

	// test strcmp() functions

	char* s1 = "COLUMBIA";
	char* s2 = "columbia";

	char* s3 = "EDUCATION";
	char* s4 = "education";

	printf("results:    = %d \n", strcmp(s1, s2)) ;
	printf("results:    = %d \n", my_strcmp2(s1, s2)) ;
	printf("results:    = %d \n", my_strcmp(s1, s2)) ;
	printf("results:    = %d \n", strcmp(s3, s4)) ;
	printf("results:    = %d \n", my_strcmp2(s3, s4)) ;
	printf("results:    = %d \n", my_strcmp(s3, s4)) ;



	return (0) ;

}
