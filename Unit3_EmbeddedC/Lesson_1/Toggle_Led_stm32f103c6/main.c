/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Mohamed Adel
 * @brief          : Main program body
 ******************************************************************************
 */

/***************************RCC**************************/
/*RCC Base Address*/
#define RCC_BASE	0x40021000

/*RCC Register Offsets*/
#define RCC_CR_OFFSET	0x00
#define RCC_CFGR_OFFSET	0x04
#define RCC_APB2ENR_OFFSET	0x18

/*RCC Registers*/
#define RCC_CR	    *(volatile unsigned int *)(RCC_BASE+RCC_CR_OFFSET)
#define RCC_CFGR	  *(volatile unsigned int *)(RCC_BASE+RCC_CFGR_OFFSET)
#define RCC_APB2ENR	*(volatile unsigned int *)(RCC_BASE+RCC_APB2ENR_OFFSET)

/*RCC Pins*/
#define RCC_HSION 0x00
#define RCC_SW 0x00
#define RCC_IOPAEN 0x02
/***********************************************************************/

/***************************GPIO PORTA**************************/
#define GPIO_PORTA_BASE 0x40010800

#define GPIOx_CRL_OFFSET 0x00
#define GPIOx_CRH_OFFSET 0x04
#define GPIOx_ODR_OFFSET 0x0C
#define GPIOx_BSRR_OFFSET 0x10


#define GPIOA_CRL		((volatile GPIO_CRL_R *)(GPIO_PORTA_BASE+GPIOx_CRL_OFFSET))
#define GPIOA_CRH		((volatile GPIO_CRH_R *)(GPIO_PORTA_BASE+GPIOx_CRH_OFFSET))
#define GPIOA_BSRR	*(volatile unsigned int *)(GPIO_PORTA_BASE+GPIOx_BSRR_OFFSET)
#define GPIOA_ODR		*(volatile unsigned int *)(GPIO_PORTA_BASE+GPIOx_ODR_OFFSET)

#define GPIO_BS15 	15
#define GPIO_BS14 	14
#define GPIO_BS13 	13
#define GPIO_BS12 	12
#define GPIO_BS11 	11
#define GPIO_BS10 	10
#define GPIO_BS9 	9
#define GPIO_BS8 	8
#define GPIO_BS7 	7
#define GPIO_BS6 	6
#define GPIO_BS5 	5
#define GPIO_BS4 	4
#define GPIO_BS3 	3
#define GPIO_BS2 	2
#define GPIO_BS1 	1
#define GPIO_BS0	0

#define GPIO_BR15 	31
#define GPIO_BR14 	30
#define GPIO_BR13 	29
#define GPIO_BR12 	28
#define GPIO_BR11 	27
#define GPIO_BR10 	26
#define GPIO_BR9 	25
#define GPIO_BR8 	24
#define GPIO_BR7 	23
#define GPIO_BR6 	22
#define GPIO_BR5 	21
#define GPIO_BR4 	20
#define GPIO_BR3 	19
#define GPIO_BR2 	18
#define GPIO_BR1 	17
#define GPIO_BR0	16

#define GPIO_PIN15_HIGH 	GPIO_BS15
#define GPIO_PIN14_HIGH 	GPIO_BS14
#define GPIO_PIN13_HIGH 	GPIO_BS13
#define GPIO_PIN12_HIGH 	GPIO_BS12
#define GPIO_PIN11_HIGH 	GPIO_BS11
#define GPIO_PIN10_HIGH 	GPIO_BS10
#define GPIO_PIN9_HIGH 		GPIO_BS9
#define GPIO_PIN8_HIGH 		GPIO_BS8
#define GPIO_PIN7_HIGH 		GPIO_BS7
#define GPIO_PIN6_HIGH 		GPIO_BS6
#define GPIO_PIN5_HIGH 		GPIO_BS5
#define GPIO_PIN4_HIGH 		GPIO_BS4
#define GPIO_PIN3_HIGH 		GPIO_BS3
#define GPIO_PIN2_HIGH 		GPIO_BS2
#define GPIO_PIN1_HIGH 		GPIO_BS1
#define GPIO_PIN0_HIGH		GPIO_BS0


#define GPIO_PIN15_LOW 	GPIO_BR15
#define GPIO_PIN14_LOW 	GPIO_BR14
#define GPIO_PIN13_LOW 	GPIO_BR13
#define GPIO_PIN12_LOW 	GPIO_BR12
#define GPIO_PIN11_LOW 	GPIO_BR11
#define GPIO_PIN10_LOW 	GPIO_BR10
#define GPIO_PIN9_LOW 	GPIO_BR9
#define GPIO_PIN8_LOW 	GPIO_BR8
#define GPIO_PIN7_LOW 	GPIO_BR7
#define GPIO_PIN6_LOW 	GPIO_BR6
#define GPIO_PIN5_LOW 	GPIO_BR5
#define GPIO_PIN4_LOW 	GPIO_BR4
#define GPIO_PIN3_LOW 	GPIO_BR3
#define GPIO_PIN2_LOW 	GPIO_BR2
#define GPIO_PIN1_LOW 	GPIO_BR1
#define GPIO_PIN0_LOW	GPIO_BR0

#define GPIO_PIN15 		15
#define GPIO_PIN14 		14
#define GPIO_PIN13 		13
#define GPIO_PIN12 		12
#define GPIO_PIN11 		11
#define GPIO_PIN10 		10
#define GPIO_PIN9 		9
#define GPIO_PIN8 		8
#define GPIO_PIN7 		7
#define GPIO_PIN6 		6
#define GPIO_PIN5 		5
#define GPIO_PIN4 		4
#define GPIO_PIN3 		3
#define GPIO_PIN2 		2
#define GPIO_PIN1 		1
#define GPIO_PIN0		0


typedef union{
	unsigned int REG;

	struct temp1{
		unsigned char MODE0		:2  ;
		unsigned char CNF0      :2  ;
		unsigned char MODE1     :2  ;
		unsigned char CNF1      :2  ;
		unsigned char MODE2     :2  ;
		unsigned char CNF2      :2  ;
		unsigned char MODE3     :2  ;
		unsigned char CNF3      :2  ;
		unsigned char MODE4     :2  ;
		unsigned char CNF4      :2  ;
		unsigned char MODE5     :2  ;
		unsigned char CNF5      :2  ;
		unsigned char MODE6     :2  ;
		unsigned char CNF6      :2  ;
		unsigned char MODE7     :2  ;
		unsigned char CNF7      :2  ;
	}SEC;

}GPIO_CRL_R;

typedef union{
	unsigned int REG;

	struct temp2{
		unsigned char MODE8	    :2  ;
		unsigned char CNF8      :2  ;
		unsigned char MODE9     :2  ;
		unsigned char CNF9      :2  ;
		unsigned char MODE10    :2  ;
		unsigned char CNF10     :2  ;
		unsigned char MODE11    :2  ;
		unsigned char CNF11     :2  ;
		unsigned char MODE12    :2  ;
		unsigned char CNF12     :2  ;
		unsigned char MODE13    :2  ;
		unsigned char CNF13     :2  ;
		unsigned char MODE14    :2  ;
		unsigned char CNF14     :2  ;
		unsigned char MODE15    :2  ;
		unsigned char CNF15     :2  ;
	}SEC;

}GPIO_CRH_R;

#define SET_BIT(reg,bit)     reg |=  (1<<bit)
#define CLEAR_BIT(reg,bit)   reg &= ~(1<<bit)


int main(void)
{
	/*Init RCC and enable PORTA*/
	SET_BIT(RCC_CR,RCC_HSION);
	CLEAR_BIT(RCC_CFGR,RCC_SW);
	SET_BIT(RCC_APB2ENR,RCC_IOPAEN);

	/*GPIO PORTA, PIN13 OUTPUT*/
	GPIOA_CRH->SEC.MODE13 = 1;
	GPIOA_CRH->SEC.CNF13  = 0;
    /* Loop forever */
int i=0;
	for(;;)
	{
		SET_BIT(GPIOA_ODR,GPIO_PIN13);
		//GPIOA_BSRR |= (1<<GPIO_PIN13_HIGH);
		for(i=0;i<100000;i++);
		CLEAR_BIT(GPIOA_ODR,GPIO_PIN13);		
		//GPIOA_BSRR |= (1<<GPIO_PIN13_LOW);
		for(i=0;i<100000;i++);
	}
}
