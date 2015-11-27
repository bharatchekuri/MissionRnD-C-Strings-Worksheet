/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdio.h>

char KthIndexFromEnd(char *str, int K) {

	
	int i = 0;

	if (str == NULL || str == "")
	{
		return '\0';
	}
		
	while (str[i] != '\0')
	{
		i++;
	}
    int	n = i - K;
	return str[n-1];

}