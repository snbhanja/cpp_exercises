//header file for main.hpp

#include<iostream>
#include<string>
using namespace std;

class Square
{
    private:
        int length;
        int width;
    public:
        Square();
        Square(int lenIn, int widIn);
        int getLength();
        int getWidth();
};

Square::Square()
{
    length = 0;
    width = 0;
}

Square::Square(int lenIn, int widIn)
{
    length = lenIn;
    width = widIn;
}

int Square::getLength()
{
    return length;
}

int Square::getWidth()
{
    return width;
}
