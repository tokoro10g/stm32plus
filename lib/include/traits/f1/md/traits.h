/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013,2014 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */

#pragma once


#if !defined(STM32PLUS_F1_MD)
#error This include file is not for your MCU
#endif


namespace stm32plus {

  /**
   * The traits templates give us a type as a container for the various constants
   * that we need to operate a peripheral. See config/custom_traits.h for the
   * mechanism that you can use to override these defaults, for example to change
   * the GPIO speed to something other than the default.
   */

  template<PeripheralName TPeripheralName>
  struct PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_ADC1> {
    enum {
      PERIPHERAL_BASE = ADC1_BASE,
      V25 = 1410,         // from the datasheet, scaled by 1000
      AVG_SLOPE = 4300
    };
  };
  typedef PeripheralTraits<PERIPHERAL_ADC1> Adc1PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_ADC2> {
    enum {
      PERIPHERAL_BASE = ADC2_BASE
    };
  };
  typedef PeripheralTraits<PERIPHERAL_ADC2> Adc2PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_GPIO> {
    enum {
      GPIO_SPEED = GPIO_Speed_50MHz
    };
  };
  typedef PeripheralTraits<PERIPHERAL_GPIO> GpioPeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_I2C1> {
    enum {
      GPIO_SPEED = GPIO_Speed_50MHz,
      PERIPHERAL_BASE = I2C1_BASE,
    };
  };
  typedef PeripheralTraits<PERIPHERAL_I2C1> I2C1PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_I2C2> {
    enum {
      GPIO_SPEED = GPIO_Speed_50MHz,
      PERIPHERAL_BASE = I2C2_BASE,
    };
  };
  typedef PeripheralTraits<PERIPHERAL_I2C2> I2C2PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_SPI1> {
    enum {
      GPIO_SPEED = GPIO_Speed_50MHz,
      PERIPHERAL_BASE = SPI1_BASE,
    };
  };
  typedef PeripheralTraits<PERIPHERAL_SPI1> Spi1PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_SPI2> {
    enum {
      GPIO_SPEED = GPIO_Speed_50MHz,
      PERIPHERAL_BASE = SPI2_BASE,
    };
  };
  typedef PeripheralTraits<PERIPHERAL_SPI2> Spi2PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_TIMER1> {
    enum {
      GPIO_SPEED = GPIO_Speed_50MHz,
      PERIPHERAL_BASE = TIM1_BASE,
      COUNTER_MAX = 0xFFFF
    };
  };
  typedef PeripheralTraits<PERIPHERAL_TIMER1> Timer1PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_TIMER2> {
    enum {
      GPIO_SPEED = GPIO_Speed_50MHz,
      PERIPHERAL_BASE = TIM2_BASE,
      COUNTER_MAX = 0xFFFF
    };
  };
  typedef PeripheralTraits<PERIPHERAL_TIMER2> Timer2PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_TIMER3> {
    enum {
      GPIO_SPEED = GPIO_Speed_50MHz,
      PERIPHERAL_BASE = TIM3_BASE,
      COUNTER_MAX = 0xFFFF
    };
  };
  typedef PeripheralTraits<PERIPHERAL_TIMER3> Timer3PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_TIMER4> {
    enum {
      GPIO_SPEED = GPIO_Speed_50MHz,
      PERIPHERAL_BASE = TIM4_BASE,
      COUNTER_MAX = 0xFFFF
    };
  };
  typedef PeripheralTraits<PERIPHERAL_TIMER4> Timer4PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_USART1> {
    enum {
      GPIO_SPEED = GPIO_Speed_50MHz,
      PERIPHERAL_BASE = USART1_BASE,
    };
  };
  typedef PeripheralTraits<PERIPHERAL_USART1> Usart1PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_USART2> {
    enum {
      GPIO_SPEED = GPIO_Speed_50MHz,
      PERIPHERAL_BASE = USART2_BASE,
    };
  };
  typedef PeripheralTraits<PERIPHERAL_USART2> Usart2PeripheralTraits;

  template<>
  struct PeripheralTraits<PERIPHERAL_USART3> {
    enum {
      GPIO_SPEED = GPIO_Speed_50MHz,
      PERIPHERAL_BASE = USART3_BASE,
    };
  };
  typedef PeripheralTraits<PERIPHERAL_USART3> Usart3PeripheralTraits;
}
