
#ifndef __SOUND_COMMEND_H
#define __SOUND_COMMEND_H

#include <stdint.h>



const uint8_t commend[14][6] = {
							{0xAA, 0x07, 0x02, 0x00, 0x01, 0xB4},		/*		0关锁成功					*/
							{0xAA, 0x07, 0x02, 0x00, 0x02, 0xB5},		/*		1指纹录入成功				*/
							{0xAA, 0x07, 0x02, 0x00, 0x03, 0xB6},		/*		2指纹校对失败				*/
							{0xAA, 0x07, 0x02, 0x00, 0x04, 0xB7},		/*		3开始指纹录入				*/
							{0xAA, 0x07, 0x02, 0x00, 0x05, 0xB8},		/*		4解锁成功 					*/		
							{0xAA, 0x07, 0x02, 0x00, 0x06, 0xB9},		/*		5清空指纹库成功				*/
							{0xAA, 0x07, 0x02, 0x00, 0x07, 0xBA},		/*		6两次指纹不匹配				*/
							{0xAA, 0x07, 0x02, 0x00, 0x08, 0xBB},		/*		7请再次把手指放在感应器上	*/
							{0xAA, 0x07, 0x02, 0x00, 0x09, 0xBC},		/*		8请把手指放在感应器上		*/
							{0xAA, 0x07, 0x02, 0x00, 0x0A, 0xBD},		/*		9请不要在门口长时间逗留		*/
							{0xAA, 0x07, 0x02, 0x00, 0x0B, 0xBE},		/*		10请离开我的家门 			*/
							{0xAA, 0x07, 0x02, 0x00, 0x0C, 0xBF},		/*		11再不走我就要报警了			*/
							{0xAA, 0x07, 0x02, 0x00, 0x0D, 0xC0},		/*		12陌生人请不要乱用指纹		*/
							{0xAA, 0x07, 0x02, 0x00, 0x0E, 0xC1}};		/*		13已经报警					*/



uint8_t volume_commend[5] = {0xAA, 0x13, 0x01, 0x05, 0xD2};		/*		设置指定音量,修改第四位		*/

//门锁状态   0为未上锁状态  1为上锁状态	默认是锁住的
int lockState = 1;

//添加指纹状态 如果状态为1 则停止指纹扫描进入添加指纹
int addfingerstate = 0;

//删除指纹状态 如果状态为1 则进入删除指纹操作
int removefingerstate = 0;

#endif /* __DRIVER_OLED_H */

