#include <iostream>
#include <unistd.h>
#include <windows.h>


using namespace std;
struct NODE{
    int x,y;
};
struct SNAKE
{
    NODE A[100];
    int length;
};
void init(SNAKE & snake)
{
    snake.length=4;
    snake.A[0].x=1;snake.A[0].y=1;
    snake.A[1].x=2;snake.A[1].y=1;
    snake.A[2].x=3;snake.A[2].y=1;
    snake.A[3].x=4;snake.A[3].y=1;

}


//void gotoxy(int x,int y) {
   // printf("%c[%d;%df", 0x1b, y, x);
//}


void gotoxy(int x, int y)
{
    static HANDLE h = NULL;
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };
    SetConsoleCursorPosition(h,c);
}
void draw(SNAKE & snake)
{
    for (int i=0; i<snake.length;i++) {
        gotoxy(snake.A[i].x, snake.A[i].y);
        cout << "x";

    }
    sleep(1000);
}

int main()
{

}