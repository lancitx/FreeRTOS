#include "led.h"
//��ʼ��PB5��PE5Ϊ�����.��ʹ���������ڵ�ʱ��		    
//LED IO��ʼ��
void LED_Init(void)
{
 
	GPIO_InitTypeDef  GPIO_InitStructure;	
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);	 	//ʹ��PB �˿�ʱ��

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;				 	//LED0-->PB5�˿�����
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT; 		 		//�������
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;		 	//IO���ٶ�Ϊ50MHz
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);					 	//�����趨������ʼ��
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;				 	//LED0-->PE5�˿�����
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT; 		 		//�������
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;		 	//IO���ٶ�Ϊ50MHz
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);					 	//�����趨������ʼ��
	
	GPIO_SetBits(GPIOA,GPIO_Pin_0);						 		//PB5�����
	GPIO_SetBits(GPIOA,GPIO_Pin_1);						 		//PE5�����
}
 
