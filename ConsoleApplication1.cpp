// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Board.h"

int main()
{
	Board game = Board();
	game.startBoard();
	game.printBoard();
    return 0;
}

