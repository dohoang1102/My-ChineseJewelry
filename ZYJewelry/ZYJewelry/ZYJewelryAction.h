//
//  ZYJewelryAction.h
//  ZYJewelry
//
//  Created by Zhiyang Zhao on 11-9-25.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
@class ZYJewelryBox;

@protocol ZYJewelryAction <NSObject>

@required
    //开始游戏
- (BOOL)Start;

    //游戏结束
- (BOOL)GameOver;

    //下一关
- (BOOL)NextLevel;

    //交换两个方块
- (BOOL)Switch: (ZYJewelryBox*)_first To: (ZYJewelryBox*)_second;

    //清除列表中所有的方块
- (BOOL)Clear: (ZYJewelryBox*)_list; 

    //方块填充被Clear的空间
- (BOOL)Fill: (ZYJewelryBox*)_list;

    //加分
- (BOOL)Score: (int)_score;

@optional

@end
