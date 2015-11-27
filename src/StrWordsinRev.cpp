/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){	

	
		char ch;
		int i, st, ub;
		st = 0;

		for (i = 0; i<len; i++)
		{
			if (input[i] == ' ')
			{
				ub = i - 1;
				while (ub >= st)
				{
					ch = input[st];
					input[st] = input[ub];
					input[ub] = ch;
					ub--;
					st++;
				}
				st = i + 1;
			}
		}
		ub = len - 1;
		while (ub >= st)
		{
			ch = input[st];
			input[st] = input[ub];
			input[ub] = ch;
			ub--;
			st++;
		}
		ub = len - 1;
		st = 0;
		while (st <= ub)
		{
			ch = input[st];
			input[st] = input[ub];
			input[ub] = ch;
			ub--;
			st++;
		}
	
}
