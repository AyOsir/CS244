//Team: Gregory Ayo , Olawale Ayejuyone, Barry Boubacar
//Author: Barry Boubacar
#ifndef VERTICALWINNER_H
#define VERTICALWINNER_H

#include "Archive.h"

namespace lab2 
{
	bool TicTacToe::verticalWinner() const
	{
		if(board[0,3,6] != '-')
		{
		  if(board[0] == board[3]&&board[6]==board[0])
		  {
		    return true;
		  }
		  else
		  {
		    return false;
		  }
		}
		if(board[1,4,7] != '-')
		{
		  if(board[1] == board[4]&&board[7]==board[1])
		  {
		    return true;
		  }
		  else
		  {
		    return false;
		  }
		}
		if(board[2,5,8] != '-')
		{
		  if(board[2] == board[5]&&board[8]==board[5])
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
