#ifndef _APPLICATION_MACRO_H_
#define _APPLICATION_MACRO_H_

#include "cocos2d.h"

//Ӧ�õĺ궨��
//Androidƽ̨
#define ANDROID_PLATFROM       1;
//IOS����
#define IOS_PLATFORM           2;
//IOS��ҵ��Ӧ��
#define IOS_PLATFORM_IN_HOUSE  3;
//winƽ̨
#define WINDOWS_PLATFORM	   4;

#define WIN_SIZE			Director::getInstance()->getWinSize()
#define VISIBLE_SIZE 		Director::getInstance()->getVisibleSize()
#define VISIBLE_ORIGIN		Director::getInstance()->getVisibleOrigin()

#endif // !_APPLICATION_MACRO_H_