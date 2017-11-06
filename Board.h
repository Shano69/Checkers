#pragma once
#include <iostream>
class Board
{
public:
	Board();
	~Board();
	char board[8][8];


	//start the board
	void startBoard()
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++) {
				if (i<3 && (j + i) % 2 == 0)
				{
					m_board[i][j] = 'b';
				}
				else if (i > 4 && (i + j) % 2 == 0) {
					m_board[i][j] = 'r';
				}
				else {
					m_board[i][j] = 'e';
				}

				board[i][j] = m_board[i][j];
				
			}
		}
		std::cout << "Game Started" << std::endl;
	}

	//get and set board
	void setBoard()
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++) {
				if(i>3&&j+i%2==0)
				{
					m_board[i][j] = 'b';
				}

				board[i][j] = m_board[i][j];
			}
		}
	}

	
	void getBoard()
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++) {
				m_board[i][j] = board[i][j];
			}
		}
	}

	//PRINT BOARD
	void printBoard()
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++) {
				if (m_board[i][j] == 'e')
				{
					std::cout << "."<<" ";
				}
				else
				std::cout << m_board[i][j]<<" ";
			}
			std::cout << std::endl;
		}
	}
private:
	char m_board[8][8];

};

Board::Board()
{
}

Board::~Board()
{
}