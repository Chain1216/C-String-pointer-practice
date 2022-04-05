/*************************************************************************/
/* File Name : my_string.c 											     */
/* Purpose   : this C-file defines the functions previously declared	 */
/*             in the my_string.h header file 						     */
/*																		 */
/* Author(s) : tjf & you 											     */
/*************************************************************************/

#include "my_string.h"

// strlen functions takes in a pointer to a string and return its length
//
size_t2 my_strlen  (const char *str) {

	size_t2 len = 0 ;
	while (str[len] != '\0') {  // count up to the first NULL
		len++ ; 
	}
	return (len) ;

}

size_t2 my_strlen2 (const char *str) {

	const char* s;
	for (s = str; *s; ++s) ;
	return (s - str);

}


/* CIT 593 students: TODO: implement the remaining string functions
   that were declared in my_string.h */

/* functions to copy a string */

char* my_strcpy  (char *dest, const char *src) {
	// Get the length of the copied content as an integer
	int src_len = (int)my_strlen2(src);
	for (int i = 0; i < src_len; i++) {
		dest[i] = src[i];
	}
   
   // add the ending null to dest
	dest[src_len] = '\0';

	return dest ;
}

char* my_strcpy2  (char *dest, const char *src) {
	const char* s;
	char* y = dest;

	for (s = src; *s; s++, y++) {
		*y = *s ;
	}
    
	// add the ending null to dest
	*y = '\0';

	return dest;
}

/* functions to search a string */
char* my_strchr (const char *str, int c) {
	int len_str = (int) my_strlen2(str);

	for (int i=0 ; i < len_str; i++) {
		if (c == (int)str[i]) {
			return (char*) &str[i];
		}
	}

	return (char*) '\0';
}

char* my_strchr2 (const char *str, int c) {
	const char*s ;
	for (s = str; *s ; s++) {
		if (c == (int)*s) {
			return (char*) s;
		}
	}

	return (char*) '\0';
}

/* functions to concatenate string */

char* my_strcat  (char *dest, const char *src) {
	int src_len = (int)my_strlen(src);
	int dest_len = (int)my_strlen(dest);
	
	int begin = dest_len;
	int end = begin + src_len;
	
	for (int i = begin; i < begin + end; i++) {
		dest[i] = src[i - begin];
	}
	
	dest[end] = '\0';
	
	return dest;

}

char* my_strcat2 (char *dest, const char *src) {
	const char* s;
	char *y = dest + my_strlen2(dest) ;

	for (s = src; *s ; s++, y++) {
		*y = *s ;
	}

	*y = '\0';

	return dest;

}

/* functions to compare two strings */

int my_strcmp  (const char *str1, const char *str2) {
	int len1 = (int)my_strlen(str1);
	int len2 = (int)my_strlen(str2);

	int ret = 0;

	for (int i = 0 ; i < len1 +1 ; i++) {
		if ((int)str1[i] != (int)str2[i]) {
			ret = (int)str1[i] - (int)str2[i];
		}
	}

	return ret ;

}

int my_strcmp2 (const char *str1, const char *str2) {
	const char* s1;
	const char* s2;

	s2 = str2 ;

	int ret = 0;

	for (s1 = str1 ; *s1 ; s1++ , s2++) {
		if ((int) *s1 != (int) *s2) {
			ret = (int) *s1 - (int) *s2 ;
			return ret ;
		}
	}

	return (int) *s1 - (int) *s2 ;
}

/* function to reverse the string passing in */

char* my_strrev(char *str) {
	int len_str = (int)my_strlen(str) ;
	for (int i = 0 ; i < len_str/2 ; i++) {
		char tm = str[i] ;
		str[i] = str[len_str - i - 1] ;
		str[len_str - i - 1] = tm ;
	}

	return str;
}

/* function to convert each character of the string to its opposite case */

char * my_strccase (char* str) {
	int len_str = (int)my_strlen(str) ;
	for (int i = 0 ; i < len_str ; i++) {
		int letter_case = str[i] ;
		if (letter_case >=97 && letter_case <= 122) {
			str[i] -= 32;
		} else if (letter_case >= 65 && letter_case <= 90) {
			str[i] += 32;
		}
	}

	return str ;
}
