// piece header file - for chess pieces 
#pragma once
#include <iostream>
#include <string>

#ifdef _WIN32
#include <Windows.h>
#endif
   

class Piece {
    public:
        Piece(char piece = ' ', char color = ' ');
        Piece(const Piece&) = delete;
        Piece& operator=(const Piece&) = delete;
        char getPiece() const;
        char getColor() const;
        void setPiece(char piece);
        void setColor(char color);
    private:
        char m_piece;
        char m_color;
    };
// piece header file - for chess pieces