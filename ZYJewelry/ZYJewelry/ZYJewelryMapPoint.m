//
//  ZYJewelryMapPoint.m
//  ZYJewelry
//
//  Created by Zhiyang Zhao on 11-9-25.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import "ZYJewelryMapPoint.h"

@implementation ZYJewelryMapPointStack

- (id)init
{
    self = [super init];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

-(BOOL)PushBackPointWithPoint: (ZYJewelryMapPoint*) point
{
    point->pre = top;
    top = point;
    return YES;
}

-(BOOL)PushBackPointWithAsisX:(int) x AsisY: (int) y;
-(ZYJewelryMapPoint*)PopBackPoint;
-(BOOL)AllClearPoint;
-(ZYJewelryMapPoint*)GetTheStackButtom;
+(ZYJewelryMapPoint*)AllocPointWithAsixX: (int) x Asix:(int) y;
+(void)FreePointWithPoint:(ZYJewelryMapPoint*) point;

@end
