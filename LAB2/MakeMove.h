//Team: <Team Name>
//Author: <Names>
//Creation: <Date>
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
