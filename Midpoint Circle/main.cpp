#include <iostream>
#include<graphics.h>

using namespace std;

int main()
{
    int x,y,z,x0,y0,p;
    cin>>x>>y>>z;
    x0=0;
    y0=z;
    p=5/4-z;
    initwindow(800,800,"");
    while(x0<y0){
    if(p<0)
    {
        x0=x0+1;
        y0=y0;
        p=p+2*x0+1;
    }
    else{
        x0=x0+1;
        y0=y0-1;
        p=p+2*(x0-y0)+1;
    }
    putpixel (x + x0, y +y0,12);
    putpixel (x - x0, y + y0,12);
    putpixel (x + x0, y - y0,12);
    putpixel(x - x0, y -y0,12);
    putpixel (x +y0, y + x0,12);
    putpixel (x - y0, y +x0,12);
    putpixel (x + y0, y - x0,12);
    putpixel (x - y0, y - x0,12);
    }
    getch();

}
