//Team: Gregory Ayo , Olawale Ayejuyone, Barry Boubacar
//Author: Gregory Ayo
#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include "Archive.h"

namespace lab2
{
	TicTacToe& TicTacToe::operator=(const TicTacToe& rhs)
	{		
	  
		if(this!= &rhs)
		{
		  player = rhs.player;
		  for (int i =0;i<9;i++)
		  {
		    board[i] = rhs.board[i];
		  }
		}
	}
}

#endif 
