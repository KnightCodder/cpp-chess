#include "board.h"

void Board::generateMoves()
{
    for (int rank = 0; rank < 8; rank++)
    {
        for (int file = 0; file < 8; file++)
        {
            for (int i = 0; i < 6; i++)
            {
                for (auto move : board[rank][file].moves[i])
                {
                    if (board[rank][file].color != turn)
                        continue;
                    else if (i == 2)
                    {
                        if (isCheck)
                            continue;
                        moves[i].push_back(move);
                    }
                    else
                    {
                        moves[i].push_back(move);
                    }

                }
            }
        }
    }
}
