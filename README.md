#STM32-PCD8544
### PCD8544 HAL library with farsi font for stm32. this library suport direct type farsi in ide. compatible with stm32f0

### How to Use
- include the functions
```C
#include "pcd8544.h"
#include "f5x7.h"
#include "Font.h"
```
- configure the pins used in the SPI. the pins are defined in the file "pcd8544.h". example:
```C
#define  PCDPORT GPIOA

#define CEE GPIO_PIN_1
#define RST GPIO_PIN_0
#define DI  GPIO_PIN_7
#define DC  GPIO_PIN_4
#define SCK GPIO_PIN_5
```

- add the initialize function to main.
```C
/* USER CODE END 2 */

LcdInitialise();
LcdClear();
```

##### usage examples are in the example folder. note that the example uses stm32f1xx
