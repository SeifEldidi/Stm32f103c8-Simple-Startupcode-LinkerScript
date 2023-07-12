#define NULL (void *)0

typedef unsigned int uint32_t;
typedef unsigned char uint8_t;

/*Symbols in LinkerScript File*/
extern uint32_t _estack;
extern uint32_t __etext;
extern uint32_t __stext;
extern uint32_t sbss;
extern uint32_t ebss;
extern uint32_t sdata;
extern uint32_t edata;
extern uint32_t _sidata;

extern int main();

void Reset_Handler                  (void) ;
void NMI_Handler                    (void) __attribute__((alias("Default_Handler")));
void HardFault_Handler              (void) __attribute__((alias("Default_Handler")));
void MemManage_Handler              (void) __attribute__((alias("Default_Handler")));
void BusFault_Handler               (void) __attribute__((alias("Default_Handler")));
void UsageFault_Handler             (void) __attribute__((alias("Default_Handler")));
void SVC_Handler                    (void) __attribute__((alias("Default_Handler")));
void DebugMon_Handler               (void) __attribute__((alias("Default_Handler")));
void PendSV_Handler                 (void) __attribute__((alias("Default_Handler")));
void SysTick_Handler                (void) __attribute__((alias("Default_Handler")));
void WWDG_Handler                   (void) __attribute__((alias("Default_Handler")));
void PVD_Handler                    (void) __attribute__((alias("Default_Handler")));
void TAMPER_Handler                 (void) __attribute__((alias("Default_Handler")));
void RTC_IRQHandler                 (void) __attribute__((alias("Default_Handler")));
void FLASH_IRQhandler               (void) __attribute__((alias("Default_Handler")));
void RCC_IRQhandler                 (void) __attribute__((alias("Default_Handler")));
void EXTI0_IRQHandler               (void) __attribute__((alias("Default_Handler")));
void EXIT1_IRQHandler               (void) __attribute__((alias("Default_Handler")));
void EXIT2_IRQHandler               (void) __attribute__((alias("Default_Handler")));
void EXIT3_IRQHandler               (void) __attribute__((alias("Default_Handler")));
void EXIT4_IRQHandler               (void) __attribute__((alias("Default_Handler")));
void DMA1_Channel1_IRQHandler       (void) __attribute__((alias("Default_Handler")));
void DMA1_Channel2_IRQHandler       (void) __attribute__((alias("Default_Handler")));
void DMA1_Channel3_IRQHandler       (void) __attribute__((alias("Default_Handler")));
void DMA1_Channel4_IRQHandler       (void) __attribute__((alias("Default_Handler")));
void DMA1_Channel5_IRQHandler       (void) __attribute__((alias("Default_Handler")));
void DMA1_Channel6_IRQHandler       (void) __attribute__((alias("Default_Handler")));
void DMA1_Channel7_IRQHandler       (void) __attribute__((alias("Default_Handler")));
void ADC_IRQHandler                 (void) __attribute__((alias("Default_Handler")));
void USB_HP_CAN_TX_IRQHandler       (void) __attribute__((alias("Default_Handler")));
void USB_LP_CAN_RX0_IRQHandler      (void) __attribute__((alias("Default_Handler")));
void CAN_RX1_IRQHandler             (void) __attribute__((alias("Default_Handler")));
void CAN_SCE_IRQHandler             (void) __attribute__((alias("Default_Handler")));
void EXIT9_5IRQHandler              (void) __attribute__((alias("Default_Handler")));
void TIM1_BRK_IRQHandler            (void) __attribute__((alias("Default_Handler")));
void TIM1_UP_IRQHandler             (void) __attribute__((alias("Default_Handler")));
void TIM1_TRG_COM_IRQHandler        (void) __attribute__((alias("Default_Handler")));
void TIM1_CC_IRQHandler             (void) __attribute__((alias("Default_Handler")));
void TIM2_IRQHandler                (void) __attribute__((alias("Default_Handler")));
void TIM3_IRQHandler                (void) __attribute__((alias("Default_Handler")));
void TIM4_IRQHandler                (void) __attribute__((alias("Default_Handler")));
void I2C1_EV_IRQHandler             (void) __attribute__((alias("Default_Handler")));
void I2C1_ER_IRQHandler             (void) __attribute__((alias("Default_Handler")));
void I2C2_EV_IRQHandler             (void) __attribute__((alias("Default_Handler")));
void I2C2_ER_IRQHandler             (void) __attribute__((alias("Default_Handler")));
void SPI1_IRQHandler                (void) __attribute__((alias("Default_Handler")));
void SPI2_IRQHandler                (void) __attribute__((alias("Default_Handler")));
void USART1_IRQHandler              (void) __attribute__((alias("Default_Handler")));
void USART2_IRQHandler              (void) __attribute__((alias("Default_Handler")));
void USART3_IRQHandler              (void) __attribute__((alias("Default_Handler")));
void EXTI15_10_IRQHandler           (void) __attribute__((alias("Default_Handler")));
void RTCAlarm_IRQHandler            (void) __attribute__((alias("Default_Handler")));
void USBWakeup_IRQHandler           (void) __attribute__((alias("Default_Handler")));
void TIM8_BRK_IRQHandler            (void) __attribute__((alias("Default_Handler")));
void TIM8_UP_IRQHandler             (void) __attribute__((alias("Default_Handler")));
void TIM8_TRG_COM_IRQHandler        (void) __attribute__((alias("Default_Handler")));
void TIM8_CC_IRQHandler             (void) __attribute__((alias("Default_Handler")));
void ADC3_IRQHandler                (void) __attribute__((alias("Default_Handler")));
void FSMC_IRQHandler                (void) __attribute__((alias("Default_Handler")));
void SDIO_IRQHandler                (void) __attribute__((alias("Default_Handler")));
void TIM5_IRQHandler                (void) __attribute__((alias("Default_Handler")));
void SPI3_IRQHandler                (void) __attribute__((alias("Default_Handler")));
void UART4_IRQHandler               (void) __attribute__((alias("Default_Handler")));
void UART5_IRQHandler               (void) __attribute__((alias("Default_Handler")));
void TIM6_IRQHandler                (void) __attribute__((alias("Default_Handler")));
void TIM7_IRQHandler                (void) __attribute__((alias("Default_Handler")));
void DMA2_Channel1_IRQHandler       (void) __attribute__((alias("Default_Handler")));
void DMA2_Channel2_IRQHandler       (void) __attribute__((alias("Default_Handler")));
void DMA2_Channel3_IRQHandler       (void) __attribute__((alias("Default_Handler")));
void DMA2_Channel4_5IRQHandler      (void) __attribute__((alias("Default_Handler")));


uint32_t *const MSP_Value=(uint32_t *)&_estack;

/*Interupt Vector Table Initilization*/
uint32_t *Vector_Table[] __attribute__((section(".isr_vector")))={
    (uint32_t *)MSP_Value,                          /* Main Stack Pointer */
    (uint32_t *)&Reset_Handler,                     /* Reset */
    (uint32_t *)&NMI_Handler,                       /* Non maskable interrupt */
    (uint32_t *)&HardFault_Handler,                 /* All class of fault */
    (uint32_t *)&MemManage_Handler,                 /* Memory management */
    (uint32_t *)&BusFault_Handler,                  /* Pre-fetch fault, memory access fault */ 
    (uint32_t *)&UsageFault_Handler,                /* Undefined instruction or illegal state */
    0,
    0,
    0,
    0,
    (uint32_t *)&SVC_Handler,                       /* System service call via SWI instruction */
    (uint32_t *)&DebugMon_Handler,                  /* Debug Monitor */
    0,
    (uint32_t *)&PendSV_Handler,                    /* Pendable request for system service */ 
    (uint32_t *)&SysTick_Handler,
    (uint32_t *)&WWDG_Handler,                   /* Window WatchDog              */                                        
    (uint32_t *)&PVD_Handler,                    /* PVD through EXTI Line detection */                        
    (uint32_t *)&TAMPER_Handler,                 /* Tamper and TimeStamps through the EXTI line */            
    (uint32_t *)&RTC_IRQHandler,                   /* RTC Wakeup through the EXTI line */                      
    (uint32_t *)&FLASH_IRQhandler,                  /* FLASH                        */                                          
    (uint32_t *)&RCC_IRQhandler,                    /* RCC                          */                                            
    (uint32_t *)&EXTI0_IRQHandler,                  /* EXTI Line0                   */                        
    (uint32_t *)&EXIT1_IRQHandler,                  /* EXTI Line1                   */                          
    (uint32_t *)&EXIT2_IRQHandler,                  /* EXTI Line2                   */                          
    (uint32_t *)&EXIT3_IRQHandler,                  /* EXTI Line3                   */                          
    (uint32_t *)&EXIT4_IRQHandler,                  /* EXTI Line4                   */                          
    (uint32_t *)&DMA1_Channel1_IRQHandler,           /* DMA1 Stream 0                */                  
    (uint32_t *)&DMA1_Channel2_IRQHandler,           /* DMA1 Stream 1                */                   
    (uint32_t *)&DMA1_Channel3_IRQHandler,           /* DMA1 Stream 2                */                   
    (uint32_t *)&DMA1_Channel4_IRQHandler,           /* DMA1 Stream 3                */                   
    (uint32_t *)&DMA1_Channel5_IRQHandler,           /* DMA1 Stream 4                */                   
    (uint32_t *)&DMA1_Channel6_IRQHandler,           /* DMA1 Stream 5                */                   
    (uint32_t *)&DMA1_Channel7_IRQHandler,           /* DMA1 Stream 6                */                   
    (uint32_t *)&ADC_IRQHandler,                    /* ADC1, ADC2 and ADC3s         */                   
    (uint32_t *)&USB_HP_CAN_TX_IRQHandler,                /* USB_CAN1 TX                      */                         
    (uint32_t *)&USB_LP_CAN_RX0_IRQHandler,               /* USB_CAN1 RX0                     */                          
    (uint32_t *)&CAN_RX1_IRQHandler,               /* CAN1 RX1                     */                          
    (uint32_t *)&CAN_SCE_IRQHandler,               /* CAN1 SCE                     */                          
    (uint32_t *)&EXIT9_5IRQHandler,                /* External Line[9:5]s          */                          
    (uint32_t *)&TIM1_BRK_IRQHandler,          /* TIM1 Break and TIM9          */         
    (uint32_t *)&TIM1_UP_IRQHandler,          /* TIM1 Update and TIM10        */         
    (uint32_t *)&TIM1_TRG_COM_IRQHandler,     /* TIM1 Trigger and Commutation and TIM11 */
    (uint32_t *)&TIM1_CC_IRQHandler,                /* TIM1 Capture Compare         */                          
    (uint32_t *)&TIM2_IRQHandler,                   /* TIM2                         */                   
    (uint32_t *)&TIM3_IRQHandler,                   /* TIM3                         */                   
    (uint32_t *)&TIM4_IRQHandler,                   /* TIM4                         */                   
    (uint32_t *)&I2C1_EV_IRQHandler,                /* I2C1 Event                   */                          
    (uint32_t *)&I2C1_ER_IRQHandler,                /* I2C1 Error                   */                          
    (uint32_t *)&I2C2_EV_IRQHandler,                /* I2C2 Event                   */                          
    (uint32_t *)&I2C2_ER_IRQHandler,                /* I2C2 Error                   */                            
    (uint32_t *)&SPI1_IRQHandler,                   /* SPI1                         */                   
    (uint32_t *)&SPI2_IRQHandler,                   /* SPI2                         */                   
    (uint32_t *)&USART1_IRQHandler,                 /* USART1                       */                   
    (uint32_t *)&USART2_IRQHandler,                 /* USART2                       */                   
    (uint32_t *)&USART3_IRQHandler,                 /* USART3                       */                   
    (uint32_t *)&EXTI15_10_IRQHandler,              /* External Line[15:10]s        */                          
    (uint32_t *)&RTCAlarm_IRQHandler,              /* RTC Alarm (A and B) through EXTI Line */                 
    (uint32_t *)&USBWakeup_IRQHandler,            /* USB OTG FS Wakeup through EXTI line */                                         
    (uint32_t *)&TIM8_BRK_IRQHandler,                   /* TIM8   BREAK                       */                   
    (uint32_t *)&TIM8_UP_IRQHandler,                   /* TIM8 UP                        */                   
    (uint32_t *)&TIM8_TRG_COM_IRQHandler,                  /* TIM8                         */                   
    (uint32_t *)&TIM8_CC_IRQHandler,                  /* TIM8                        */                   
    (uint32_t *)&ADC3_IRQHandler,               /* ADC3 */                   
    (uint32_t *)&FSMC_IRQHandler,                   /* FSMC                        */
    (uint32_t *)&SDIO_IRQHandler,           /* SDIO               */                   
    (uint32_t *)&TIM5_IRQHandler,           /* TIM5                */                   
    (uint32_t *)&SPI3_IRQHandler,           /* SPI 3                */                   
    (uint32_t *)&UART4_IRQHandler,           /* USART4                */                   
    (uint32_t *)&UART5_IRQHandler,           /* USART5                */                   
    (uint32_t *)&TIM6_IRQHandler,                    /* TIM6                     */                   
    (uint32_t *)&TIM7_IRQHandler,               /* TIM7 */                     
    (uint32_t *)&DMA2_Channel1_IRQHandler,                /* DMA2 Stream 1                */                           
    (uint32_t *)&DMA2_Channel2_IRQHandler,               /* DMA2 Stream 2                */                           
    (uint32_t *)&DMA2_Channel3_IRQHandler,                /* DMA2 Stream 3                */                           
};

static void System_Initiliazation(void){
    /*Clock Init*/
}

/*Entry Point*/
void Reset_Handler(void){
    /*Startup Code Implementation*/
    uint32_t Section_Size=0;
    uint32_t MemCounter=0;
    uint32_t *SourceAdd=NULL;
    uint32_t *DestAdd=NULL;
    /*1] Copy data from data section in ROM to data section in RAM*/
    Section_Size = &edata - &sdata;
    SourceAdd =(uint32_t *)&_sidata;
    DestAdd   =(uint32_t *)&sdata;

    for(MemCounter=0;MemCounter<=Section_Size-1;MemCounter++){
        *DestAdd++=*SourceAdd++;
    }
    
    /*2] Initilize the .bss with zeros*/
    SourceAdd =(uint32_t *)&sbss;
    Section_Size = &ebss - &sbss;

    for(MemCounter=0;MemCounter<=Section_Size-1;MemCounter++){
            *SourceAdd++=0;
    }

    /*3] Call SystemInitFunction */
    System_Initiliazation();
    /*4] Call Main Function*/
    main();
}


void Default_Handler(void){

}
