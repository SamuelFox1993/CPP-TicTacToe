#pragma once
#include <iostream>
#include "Game.h"

class TicTacToe : public Game
{

private:

	char m_board[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

public:

	virtual bool IsGameOver() const
	{
		if (m_board[0] != ' ' && m_board[1] != ' ' && m_board[2] != ' ' && m_board[3] != ' ' && m_board[4] != ' ' && m_board[5] != ' ' && m_board[6] != ' ' && m_board[7] != ' ' && m_board[8] != ' ')
		{
			return true;
		}
		else if (m_board[0] == 'X' && m_board[1] == 'X' && m_board[2] == 'X')
		{
			std::cout << "Player X wins!\n";
			return true;
		}
		else if (m_board[3] == 'X' && m_board[4] == 'X' && m_board[5] == 'X')
		{
			std::cout << "Player X wins!\n";
			return true;
		}
		else if (m_board[6] == 'X' && m_board[7] == 'X' && m_board[8] == 'X')
		{
			std::cout << "Player X wins!\n";
			return true;
		}
		else if (m_board[0] == 'X' && m_board[3] == 'X' && m_board[6] == 'X')
		{
			std::cout << "Player X wins!\n";
			return true;
		}
		else if (m_board[1] == 'X' && m_board[4] == 'X' && m_board[7] == 'X')
		{
			std::cout << "Player X wins!\n";
			return true;
		}
		else if (m_board[2] == 'X' && m_board[5] == 'X' && m_board[8] == 'X')
		{
			std::cout << "Player X wins!\n";
			return true;
		}
		else if (m_board[0] == 'X' && m_board[4] == 'X' && m_board[8] == 'X')
		{
			std::cout << "Player X wins!\n";
			return true;
		}
		else if (m_board[2] == 'X' && m_board[4] == 'X' && m_board[6] == 'X')
		{
			std::cout << "Player X wins!\n";
			return true;
		}

		else if (m_board[0] == 'O' && m_board[1] == 'O' && m_board[2] == 'O')
		{
			std::cout << "Player O wins!\n";
			return true;
		}
		else if (m_board[3] == 'O' && m_board[4] == 'O' && m_board[5] == 'O')
		{
			std::cout << "Player O wins!\n";
			return true;
		}
		else if (m_board[6] == 'O' && m_board[7] == 'O' && m_board[8] == 'O')
		{
			std::cout << "Player O wins!\n";
			return true;
		}
		else if (m_board[0] == 'O' && m_board[3] == 'O' && m_board[6] == 'O')
		{
			std::cout << "Player O wins!\n";
			return true;
		}
		else if (m_board[1] == 'O' && m_board[4] == 'O' && m_board[7] == 'O')
		{
			std::cout << "Player O wins!\n";
			return true;
		}
		else if (m_board[2] == 'O' && m_board[5] == 'O' && m_board[8] == 'O')
		{
			std::cout << "Player O wins!\n";
			return true;
		}
		else if (m_board[0] == 'O' && m_board[4] == 'O' && m_board[8] == 'O')
		{
			std::cout << "Player O wins!\n";
			return true;
		}
		else if (m_board[2] == 'O' && m_board[4] == 'O' && m_board[6] == 'O')
		{
			std::cout << "Player O wins!\n";
			return true;
		}
		else { return false; }
	}

	virtual void Display() const;

	virtual void TakeTurn()
	{
		std::cout << "It is Player X's turn.\nPick a spot on the board (1-9): ";
		int input1;
		//char playerX = 'X';
		std::cin >> input1;
		if (input1 >= 1 || input1 <= 9)
		{
			if (m_board[input1 - 1] == ' ')
			{
				m_board[input1 - 1] = 'X';
			}
			else { std::cout << "That spot has been taken. Please try agian.\n"; }
		}
		else { std::cout << "Invalid. Please pick a number between 1 and 9.\n"; }

		std::cout << "It is Player O's turn.\nPick a spot on the board (1-9): ";
		int input2;
		//char playerO = 'O';
		std::cin >> input2;
		if (input2 > 1 || input2 < 9)
		{
			if (m_board[input2 - 1] == ' ')
			{
				m_board[input2 - 1] = 'O';
			}
			else { std::cout << "That spot has been taken. Please try agian.\n"; }
		}
		else { std::cout << "Invalid. Please pick a number between 1 and 9.\n"; }
	}

};

