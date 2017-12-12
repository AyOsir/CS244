//Team: <Team Name>
//Author: Gregory Ayo
//Creation: <Date>
#ifndef WINNER_H
#define WINNER_H

#include "Archive.h"

namespace lab2
{
	bool TicTacToe::winner() const
	{
		if(diagonalWinner() || horizontalWinner() || verticalWinner())
		{
		  return true;
		}
		else 
		{
			return false;
		}
		
	}
}

#endif 
