///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����ĩ�μ��˱���������ɳ����������˼�Ļ��ͨ���������ʶ�������ø��ܶ������������������Ŷӣ�һ�����о����ᣡ
//��������������˼���û�У���˳������ֲ�͵��Զ����Լ�������ʱ���������ģ�Ҳ�������ʡ�
//������EEPW�����̳�Խ��Խ��������ڷ��׳��Լ��Ĵ��룬���Ǹ��õ�����
//��Ϊֻ�в��Ͻ���������ȡ�ø���Ľ�����������Ƥ�������������~ 
//    
//�����������Ҿ������Լ���ֲ���ԵĴ��뿪Դ�����������ѧϰ��ϣ�������һ�����������������������ǡ�
//��Ϊ���ǵ��׼�����һ���ģ�Ӳ������һ�µ��ˣ��Ǿ�ֻ��Ҫ�о������ϵ��㷨�����ˡ����������᷽��Ķ࣡
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//����DIY����飺http://www.eepw.com.cn/event/action/QuadCopter_DIY/
//
//������̳��http://forum.eepw.com.cn/forum/368/1 
//
//�ҵ�����DIY��������http://forum.eepw.com.cn/thread/248747/1
//
//�Ա����̣�http://item.taobao.com/item.htm?spm=a230r.1.14.23.sYD4gY&id=35605621244
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	BY:������ɣ�2014,4,30
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef _UART_UART_H_
#define _UART_UART_H_
#include "stm32f10x.h"
#include "bsp/usart.h"

void Uart_CheckEvent(void);
void PC_Debug_Show(u8 num,u16 sta);
void Uart1_Send_Buf(u8 *buf,u8 num);
void Uart1_Send_RCdata(void);

#endif