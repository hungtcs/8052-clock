#ifndef __COMMON__

// boolean 定义
#define  true   1
#define  false  0

// 电平定义
#define  high   1
#define  low    0

// 空操作
#define __nop__ \
  __asm nop __endasm

/**
 * 延时 1ms
 * 晶震 11.0592
 * 误差 -0.651041666667us
 */
// void delay(unsigned char time)
// {
//   unsigned char a, b;
//   while(time--)
//   {
//     for(b=102;b>0;b--)
//       for(a=3;a>0;a--);
//   }
// }

#endif // __COMMON__
