#include <C:\Users\SRB\Desktop\CodeBlocks\TX\TXLib.h>
void sharic();
void palochka();
void martira();
int main()
{

    txCreateWindow(500, 450);
    txSetFillColor(RGB(0, 191, 255));
    txRectangle(0, 0, 500, 450);

    txSetColor(TX_BLACK);

    palochka();
    martira();
    sharic();
    return 0;
};
void martira()
{
    txSetFillColor(RGB(102, 255, 0));
    txRectangle(0, 450, 175, 300);
    txSetFillColor(RGB(27, 30, 35));
    POINT Wert[4] = {{120, 285}, {130, 250}, {150, 250}, {160,285}};
    txPolygon(Wert, 4);
    txSetFillColor(RGB(118, 92, 72));
    txRectangle(110, 300, 170, 285);
};
void palochka()
{
    txSetFillColor(RGB(128, 128, 128));
    txRectangle(90, 310, 94, 280);
};
void sharic()
{
    txSetFillColor(TX_BLACK);
    txCircle(140, 230, 10);
}
