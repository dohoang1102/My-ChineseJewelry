//
//  ZYJewelryBox.h
//  ZYJewelry
//
//  Created by Zhiyang Zhao on 11-9-25.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

// 对于地图上物品的定义
typedef enum _ZYJewelryBoxType 
{
    JEWELRY_TYPE_WALL   = 0xffffffff,       // MJJEWELRY_TYPE_WALL \
                                                cant put some thing 不可能放东西
    JEWELRY_TYPE_NONE   = 0x00000000,       // MJJEWELRY_TYPE_NONE \
                                                nothing at here 什么都没有
    JEWELRY_TYPE_GOLD   = 0x1 << 0,         // MJJEWELRY_TYPE_GOLD  金
    JEWELRY_TYPE_WOOD   = 0x1 << 1,         // MJJEWELRY_TYPE_WOOD  木
    JEWELRY_TYPE_WATER  = 0x1 << 2,         // MJJEWELRY_TYPE_WATER 水
    JEWELRY_TYPE_FIRE   = 0x1 << 3,         // MJJEWELRY_TYPE_FIRE  火
    JEWELRY_TYPE_EARTH  = 0x1 << 4          // MJJEWELRY_TYPE_EARTH 土
} ZYJewelryBoxType;

@interface ZYJewelryBox : NSObject
{
    ZYJewelryBoxType type;
}

@property ZYJewelryBoxType type;
	
- (id)initWithType: (ZYJewelryBoxType) _type;

@end
