#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int h,w,r;
    cin<< h<< w<< r;
    if (h<1 || h>1000) return -1;
    if (w<1 || w>1000) return -1;
    if (r<1 || r>10) return -1;

    int pb,pr,b;
    cin <<pb << pr<< b;
    if (pb<1 || pb>5) return -1;
    if (pr<5 || pr>100) return -1;
    if (b<1 || b>1000000000) return -1;

    int br,bc;
    cin << br <<bc;
    if (br<0 || br >=h) return -1;
    if (bc<0 || bc >=w) return -1;



    return 0;
}
