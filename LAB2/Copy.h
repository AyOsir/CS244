//Team: Gregory Ayo , Olawale Ayejuyone, Barry Boubacar
//Author: Barry Boubacar
#ifndef COPY_H
#define COPY_H

#include "Archive.h"

namespace lab2
{
	TicTacToe::TicTacToe(const TicTacToe& other)
	{
	  int i;
	  for(i=0;i<9;i++)
	  {
	    board[i] = other.board[i];
	  }
	  player = other.player;
	}
}

#endif 
