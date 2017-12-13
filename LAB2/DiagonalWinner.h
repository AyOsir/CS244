//Team: Gregory Ayo , Olawale Ayejuyone, Barry Boubacar
//Author: Gregory Ayo
#ifndef DIAGONALWINNER_H
#define DIAGONALWINNER_H

#include "Archive.h"

namespace lab2
{
	bool TicTacToe::diagonalWinner() const
	{
			if(board[0,4,8] != '-')
		{
		  if(board[0] == board[4]&&board[8]==board[0])
		  {
		    return true;
		  }
		  else
		  {
		    return false;
		  }
		}
		if(board[2,4,6] != '-')
		{
		  if(board[2] == board[4]&&board[6]==board[2])
		  {
		    return true;
		  }
		  else
		  {
		    return false;
		  }
		}
		
	}
}

#endif 
