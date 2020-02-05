#include <iostream>
#include<graphics.h>

using namespace std;

int main()
{
    int x1,y1,x2,y2,dx,dy,len,x,y,i=1,a,b;
    initwindow(400,400);
    cout<<"Enter Coordinates";
    cin>>x1>>y1>>x2>>y2;
    x=abs(x2-x1);
    y=abs(y2-y1);
    if(x>=y)
    {
        len=x;
    }
    else
    {
        len=y;
    }
    dx=x/len;
    dy=y/len;
    a=x1;
    b=y1;
    while(i<=len)
    {
        putpixel(a,b,RED);
        a=a+dx;
        b=b+dy;
        i=i+1;
        delay(100);
    }

    return 0;
}
