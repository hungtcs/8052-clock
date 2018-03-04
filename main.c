#include <8052.h>
#include "common.h"
#include "DS1302.c"

void main()
{
  setup();
  while(1) loop();
}
