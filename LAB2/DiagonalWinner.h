//Team: Gregory Ayo , Olawale Ayejuyone, Barry Boubacar
//Author: Gregory Ayo
#ifndef DIAGONALWINNER_H
#define DIAGONALWINNER_H

#include "Archive.h"

namespace lab2
{
	bool TicTacToe::diagonalWinner() const
	{
		if (board[0][0] == board[1][1] &&

        board[1][1] == board[2][2] &&

        board[0][0] != ' ')

        return(true);

    		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')

		return true;
		return false;
	}
}

#endif 
