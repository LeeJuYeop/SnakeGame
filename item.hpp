#pragma once
#include <ncurses.h>

namespace snake{

    // Item은 기본적으로 row, col, icon을 가지고, row, col getting 과 icon setting을 지원
    class Item
    {
    public:
        Item(int y = 0, int x = 0);

        int getX();

        int getY();

        void setIcon(char ch);   

    protected:
        int row, col;
        char icon;
    };

    // Item 상속 받아서 icon만 'A'로 바꿈
    class Apple : public Item
    {
    public:
        Apple(int y = 0, int x = 0);
        int getAppleScore();
    private:
        // scoreBoard에 사용할 정적 멤버변수 생성.
        static int appleScore;
    };

    // Item 상속 받아서 icon만 'B'로 바꿈
    class Bomb : public Item
    {
    public:
        Bomb(int y = 0, int x = 0);
        int getBombScore();
    private:
        // scoreBoard에 사용할 정적 멤버변수 생성.
        static int bombScore;
    };
}