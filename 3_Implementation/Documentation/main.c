
#include <avr/io.h>
#include"Check1.h"
#include"Check2.h"
#include"Check3.h"
int main(void)
{
    while(1)
    {
        Check1();
        Check2();
        //Check3();
    }
  return 0;
}
