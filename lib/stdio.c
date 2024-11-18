#include "stdint.h"
#include "HalUart.h"
#include "stdio.h"

uint32_t putstr(const char* s)
{
    // 보안상으로 무언가 확인하는 코드가 있는 게 나을 거 같은데? 그냥 배우는 거니까 넘어가는걸로~
    uint32_t c = 0;
    while(*s)
    {
        Hal_uart_put_char(*s++);
        c++;
    }
    return c;
}