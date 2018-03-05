#include <stdio.h>
#include <stdlib.h>

int main()
{
    if (!bcm2835_init(int argc, char **argv))
    {
      printf("bcm2835_init failed. Are you running as root??\n");
      return 1;
    }
  // Define pins from 2 to 8 as output
  bcm2835_gpio_fsel(2,1);
  bcm2835_gpio_fsel(3,1);
  bcm2835_gpio_fsel(4,1);
  bcm2835_gpio_fsel(5,1);
  bcm2835_gpio_fsel(6,1);
  bcm2835_gpio_fsel(7,1);
  bcm2835_gpio_fsel(8,1);
  // Define pin 12 as input
  bcm2835_gpio_fsel(12,0);

    int i=0;
    while(1)
    {

        if(bcm2835_gpio_lev(12)==1){
            bcm2835_gpio_clr_multi(111111111);
            if(i<10){
                i++;
            }
            else{
                i=0;
            }
            if(i=0 || i=10)bcm2835_gpio_set_multi(001111110);
            else if(i=1)bcm2835_gpio_set_multi(000110000);
            else if(i=2)bcm2835_gpio_set_multi(001101101);
            else if(i=3)bcm2835_gpio_set_multi(001111001);
            else if(i=4)bcm2835_gpio_set_multi(000110011);
            else if(i=5)bcm2835_gpio_set_multi(001011011);
            else if(i=6)bcm2835_gpio_set_multi(001011111);
            else if(i=7)bcm2835_gpio_set_multi(001110000);
            else if(i=8)bcm2835_gpio_set_multi(001111111);
            else if(i=9)bcm2835_gpio_set_multi(001111011);

        }

    }
    return 0;
}
