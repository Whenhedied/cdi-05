#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    
    stdio_init_all();
    char cont = 0;
    gpio_init_mask(0x3ff);
    
    gpio_get_dir_masked(0x3ff, 0x7f);
    
    while (true) {
        
        char a = gpio_get(0);
        char b = gpio_get(1);
        char c = gpio_get(2);

        if (a==1){
            cont = cont+1;
        }
        if (b==1){
            cont = cont-1;
        }
        if (c==1){
            cont = 0;
        }
        if (cont>9){
            cont = 9
        }
        if (cont<0){
            cont = 0
        }
        
        if (cont==0){
            gpio_put_mask(0x7f,0x0)
        }
        if (cont==1){
            gpio_put_mask(0x7f,0x30);
        }

        if (cont==2){
            gpio_put_mask(0x7f,0x6D);
        }

        if (cont==3){
            gpio_put_mask(0x7f,0x79);
        }
        if (cont==4){
            gpio_put_mask(0x7f,0x33);
        }
        if (cont==5){
            gpio_put_mask(0x7f,0x5B);
        }
        if (cont==6){
            gpio_put_mask(0x7f,0x5F);
        }
        if (cont==7){
            gpio_put_mask(0x7f,0x70);
        }
        if (cont==8){
            gpio_put_mask(0x7f,0x7F);
        }
        if (cont==9){
            gpio_put_mask(0x7f,0x73);
        }
        sleep_ms(500);       
    }
    return 0;
}