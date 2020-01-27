#include <iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\TC\BGI");
    int x1,y1,x2,y2,pk,a,b,x,y,counter,swapx,swapy;
    cin>>x1>>y1>>x2>>y2;
    x=fabs(x2-x1);
    y=fabs(y2-y1);
    pk=2*y-x;
    if(x1>x2)
    {
        swapx=x1;
        x1=x2;
        x2=swapx;
    }
    else{
        swapy=y1;
        y1=y2;
        y2=swapy;
    }
    a=x1;
    b=y1;
    putpixel(a,b,RED);
    counter=0;
    while(counter < x )
    {
        if(pk>=0)
    {
        a=a+1;
        b=b+1;
        pk=pk+2*y-2*x;
    }
    else if(pk<0)
        {
        a=a+1;
        b=b;
        pk=pk+2*y;
        }
        putpixel(a,b,RED);
        counter++;
     delay(10);
    }
    delay(10000);
    }


