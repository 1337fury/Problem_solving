#include <stdbool.h>

bool isMatch(char * s, char * p)
{
   char *star = 0;
   char *p_s = s;

   while (*s)
   {
       if (*s == *p || *p == '?')
        {
            s++;
            p++;
            continue ;
        }
        if (*p == '*')
        {
            star = p++;
            p_s = s;
            continue ;
        }
        if (star)
        {
            p = star + 1;
            s = ++p_s;
            continue ;
        }
        return (false);
   }
	while (*p == '*')
    	p++;
	return (!(*p));
}
