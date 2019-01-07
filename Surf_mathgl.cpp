#include "mgl2/mgl.h"

 //plot a surface

int main()
    {
        


mglData x(6,6);
x.Read("matriceaX.txt",6,6);
mglData y(6,6);
y.Read("matriceaY.txt",6,6);
mglData z(6,6);
z.Read("matriceaZ.txt",6,6);




  mglGraph gr1; 
  gr1.Rotate(40,60); gr1.Light(true); gr1.Box();
  gr1.SetRanges(x,y,z);
  gr1.Surf(x,y,z); 
  gr1.WriteFrame("surf.png");

  return 0;
    }
    
    
