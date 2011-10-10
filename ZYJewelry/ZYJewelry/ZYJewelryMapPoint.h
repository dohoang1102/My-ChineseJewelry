//
//  ZYJewelryMapPoint.h
//  ZYJewelry
//
//  Created by Zhiyang Zhao on 11-9-25.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

    // 对于地图上的点的定义
typedef struct _ZYJewelryMapPoint {
    // int isPop;
    int x;
    int y;
    struct _ZYJewelryMapPoint* pre;
    struct _ZYJewelryMapPoint* next; 
} ZYJewelryMapPoint, *PZYJewelryMapPoint;

@interface ZYJewelryMapPointStack : NSObject
{
    ZYJewelryMapPoint* buttom;
    ZYJewelryMapPoint* top;
}

-(BOOL)PushBackPointWithPoint: (ZYJewelryMapPoint*) point;
-(BOOL)PushBackPointWithAsisX:(int) x AsisY: (int) y;
-(ZYJewelryMapPoint*)PopBackPoint;
-(BOOL)AllClearPoint;
-(ZYJewelryMapPoint*)GetTheStackButtom;
+(ZYJewelryMapPoint*)AllocPointWithAsixX: (int) x Asix:(int) y;
+(void)FreePointWithPoint:(ZYJewelryMapPoint*) point;

@end
