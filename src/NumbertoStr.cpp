/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.
OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified
Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/
#include <stdio.h>
void number_to_str(float number, char *str,int afterdecimal)
{

	float n = number;
	if (n < 0)
	{
		n = -n;
	}


   int ipart = (int)n;
   float fpart = n - (float)ipart;
   int rev = 0,i = 0;
   int x = ipart;
		
        while (x != 0)
		{
			rev = rev * 10;
			rev = rev + x % 10;
			x = x / 10;
		}


		if (number<0)       // if num is negitive
		{
			
			str[0] = '-';
			i = i + 1;
			while (rev != 0)
			{
				str[i] = (rev % 10) + '0';
				i++;
				rev = rev / 10;
			}
		}


			while (rev != 0)        // if num is positive
			{
				str[i] = (rev % 10) + '0';
				i++;
				rev = rev / 10;
			}

		

		if (afterdecimal != 0)
		{
			str[i] = '.';  // add dot

			ipart = fpart * 100000;

			x = ipart;
			rev = 0;

			while (x != 0)
			{
				rev = rev * 10;
				rev = rev + x % 10;
				x = x / 10;
		 	}

			i=i+1;

			for (int j = 0; j < afterdecimal; j++)
			{
				str[i] = (rev % 10) + '0';
				rev = rev / 10;
				i++;
			}
	     }
}
	