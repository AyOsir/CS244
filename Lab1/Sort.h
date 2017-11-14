#ifndef SORT_H
#define SORT_H

#include "Archive.h"

namespace labI
{
     void Sort(float data[],int size)
	{
      for (j = 0; j < size; ++j)
       {
      for (k = j + 1; k < size; ++k)
      {
         if (number[j] > number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
      }
   }
		return;
	}
}

#endif 
