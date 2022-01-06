#include <Your library path>
void sharic(int x, int y);
void palochka(int xp);
void martira(int xm);
int main()
{
    int t = 0;
    while (t < 18)
    {
        int x = 0;
        int y = 0;
        int xp = 0;
        int xm = 0;
        txCreateWindow(500, 450);
        txSetFillColor(RGB(0, 191, 255));
        txRectangle(0, 0, 500, 450);

        txSetColor(TX_BLACK);

        palochka(xp);
        martira(xm);
        sharic(x, y);
        t++;
        txSleep(100);
    };
    return 0;
};
void martira(int xm)
{
    txSetFillColor(RGB(102, 255, 0));
    txRectangle(0, 450, 175, 300);
    txSetFillColor(RGB(27, 30, 35));
    POINT Wert[4] = {{120, 285}, {130+xm, 250}, {150+xm, 250}, {160,285}};
    txPolygon(Wert, 4);
    txSetFillColor(RGB(118, 92, 72));
    txRectangle(110, 300, 170, 285);
};
void palochka(int xp)
{
    txSetFillColor(RGB(128, 128, 128));
    txRectangle(90+xp, 310, 94+xp, 280);
};
void sharic(int x, int y)
{
    txSetFillColor(TX_BLACK);
    txCircle(140 + x, 230 + y, 10);
}
