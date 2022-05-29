//   Student Name:       Reziyemu Sulaiman
//   Seneca Student ID:  106-153-208
//   Seneca email:       rsulaiman2@myseneca.ca
//   Date of completion: 2021-03-27

// I have done all the coding by myself and only copied the code (logic)
// that my professor provided to complete my workshops and assignments.




#define _CRT_SECURE_NO_WARNINGS
#include "cstring.h"


namespace sdds
{

	// returns the lenght of the C-string in characters
	int strLen(const char* s)
	{
		int i = 0;
		while (s[i] != '\0')
			i = i + 1;

		return i;
	}

	// Copies the srouce character string into the destination
	void strCpy(char* des, const char* src)
	{

		for (int i = 0; i < strLen(src) + 1; i++)
		{
			des[i] = src[i];
		}
	}

		
	// Compares two C-strings 
	// returns 0 i thare they are same
	// return > 0 if s1 > s2
	// return < 0 if s1 < s2
	int strCmp(const char* s1, const char* s2)
	{
		for (int i = 0; i < strLen(s1); i++)
		{
			if (s1[i] != s2[i])
			{
				if (s1[i] > s2[i])
				{
					return 1;
				}
				if (s1[i] < s2[i])
				{
					return -1;
				}
			}
		}
		return 0;
	}


}












