#include "item.hpp"

namespace snake{

    // scoreBoard에 사용할 정적 멤버변수 초기화
    int Apple::appleScore = 0;
    int Bomb::bombScore = 0;

    Item::Item(int y, int x) : row(y), col(x), icon(' ') {}

    int Item::getX()
    {
        return col;
    }

    int Item::getY()
    {
        return row;
    }

    void Item::setIcon(char ch)
    {
        icon = ch;
    }


    Apple::Apple(int y, int x) : Item(y, x)
    {
        icon = 'A';
        appleScore++;
    }
    
    Bomb::Bomb(int y, int x) : Item(y, x)
    {
        icon = 'B';
        bombScore++;
    }

    int Apple::getAppleScore()
    {
        return appleScore;
    }

    int Bomb::getBombScore()
    {
        return bombScore;
    }
}