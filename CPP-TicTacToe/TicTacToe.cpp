#include "TicTacToe.h"

void TicTacToe::Display() const
{
	std::cout << m_board[0] << "|" << m_board[1] << "|" << m_board[2] << "\n";
	std::cout << "-----\n";
	std::cout << m_board[3] << "|" << m_board[4] << "|" << m_board[5] << "\n";
	std::cout << "-----\n";
	std::cout << m_board[6] << "|" << m_board[7] << "|" << m_board[8] << "\n";
}
