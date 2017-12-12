//Team: <Team Name>
//Author: <Names>
//Creation: <Date>
#ifndef INITIALIZE_H
#define INITIALIZE_H

#include "Archive.h"

namespace lab2
{
	TicTacToe::TicTacToe()
	{
	  int i;
	  for(i=0; i<9; i++)
	  {
	    board[i] = '-';
	    
	  }
	  player = 1;
	}
}

#endif 
