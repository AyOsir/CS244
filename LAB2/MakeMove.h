//Team: Gregory Ayo , Olawale Ayejuyone, Barry Boubacar
//Author: Olawale Ayejuyone
#ifndef MAKEMOVE_H
#define MAKEMOVE_H

#include "Archive.h"

namespace lab2
{
	bool TicTacToe::makeMove(int position)
	{			
		if(board[position]=='-')
		{
		  position = TOKENS[player];
		}
	}
}

#endif 
