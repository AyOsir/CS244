//Team: <Team Name>
//Author: <Names>
//Creation: <Date>
#ifndef COPY_H
#define COPY_H

#include "Archive.h"

namespace lab4
{
	TowersOfHanoi::TowersOfHanoi(const TowersOfHanoi& obj) {}
	
	TowersOfHanoi& TowersOfHanoi::operator=(const TowersOfHanoi& obj)
	{		
		return *this;
	}
}

#endif 
