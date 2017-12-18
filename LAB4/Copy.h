//Team: Gregory Ayo , Olawale Ayejuyone, Barry Boubacar
//Author: Gregory Ayo
#ifndef COPY_H
#define COPY_H

#include "Archive.h"

namespace lab4
{
	TowersOfHanoi::TowersOfHanoi(const TowersOfHanoi& obj) {}
	
	TowersOfHanoi& TowersOfHanoi::operator=(const TowersOfHanoi& obj)
	{
	  
	 if(this!= &obj)
    {
      for(int i =0;i<3;i++)
	  {
	    towers[i]=obj.towers[i];
	  }
    }

		return *this;
	}
}

#endif 
