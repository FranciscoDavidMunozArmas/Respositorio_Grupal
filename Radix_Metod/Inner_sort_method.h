/***********************************************************************
 * Module:  Inner_sort_method.h
 * Author:  USUARIO
 * Modified: sábado, 6 de junio de 2020 09:22:30
 * Purpose: Declaration of the class Inner_sort_method
 ***********************************************************************/

#if !defined(__Sort_methods_Inner_sort_method_h)
#define __Sort_methods_Inner_sort_method_h

#include <iostream>

using namespace std;

class Inner_sort_method
{
public:

   void _count_sort(char** _array, int index);
   int _get_max(char** _array);
   void _radix_sorting(char** _array);

protected:
private:
	void _radix(char** _array, int most_significant, int least_significant_digit);
};

#endif
