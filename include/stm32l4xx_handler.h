/*
 * stm32l4xx_handler.h
 *
 *  Created on: Nov 11, 2018
 *      Author: technix
 */

#if defined(STM32L412xx)
  #include "stm32l412xx_handler.h"
#elif defined(STM32L422xx)
  #include "stm32l422xx_handler.h"
#elif defined(STM32L431xx)
  #include "stm32l431xx_handler.h"
#elif defined(STM32L432xx)
  #include "stm32l432xx_handler.h"
#elif defined(STM32L433xx)
  #include "stm32l433xx_handler.h"
#elif defined(STM32L442xx)
  #include "stm32l442xx_handler.h"
#elif defined(STM32L443xx)
  #include "stm32l443xx_handler.h"
#elif defined(STM32L451xx)
  #include "stm32l451xx_handler.h"
#elif defined(STM32L452xx)
  #include "stm32l452xx_handler.h"
#elif defined(STM32L462xx)
  #include "stm32l462xx_handler.h"
#elif defined(STM32L471xx)
  #include "stm32l471xx_handler.h"
#elif defined(STM32L475xx)
  #include "stm32l475xx_handler.h"
#elif defined(STM32L476xx)
  #include "stm32l476xx_handler.h"
#elif defined(STM32L485xx)
  #include "stm32l485xx_handler.h"
#elif defined(STM32L486xx)
  #include "stm32l486xx_handler.h"
#elif defined(STM32L496xx)
  #include "stm32l496xx_handler.h"
#elif defined(STM32L4A6xx)
  #include "stm32l4a6xx_handler.h"
#elif defined(STM32L4R5xx)
  #include "stm32l4r5xx_handler.h"
#elif defined(STM32L4R7xx)
  #include "stm32l4r7xx_handler.h"
#elif defined(STM32L4R9xx)
  #include "stm32l4r9xx_handler.h"
#elif defined(STM32L4S5xx)
  #include "stm32l4s5xx_handler.h"
#elif defined(STM32L4S7xx)
  #include "stm32l4s7xx_handler.h"
#elif defined(STM32L4S9xx)
  #include "stm32l4s9xx_handler.h"
#else
 #error "Please select first the target STM32L4xx device used in your application (in stm32l4xx.h file)"
#endif
