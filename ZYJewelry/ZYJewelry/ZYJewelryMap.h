//
//  ZYJewelryMap.h
//  ZYJewelry
//
//  Created by Zhiyang Zhao on 11-9-25.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import "ZYJewelryGlobal.h"
#import "ZYJewelryAction.h"
#import "ZYJewelryAnimated.h"
#import <Foundation/Foundation.h>

@class ZYJewelryBox;

#define MAP_VALID_SIZE  10
#define MAP_EDGE_SIZE   2
#define MAX_MAP_SIZE    (MAP_EDGE_SIZE + MAP_VALID_SIZE + MAP_EDGE_SIZE)
#define MAP_LEFT_EDGE   (MAP_EDGE_SIZE)
#define MAP_RIGHT_EDGE  (MAX_MAP_SIZE - MAP_EDGE_SIZE)
#define MAP_TOP_EDGE    (MAP_EDGE_SIZE)
#define MAP_BUTTOM_EDGE (MAX_MAP_SIZE - MAP_EDGE_SIZE)

@interface ZYJewelryMap : NSObject
{
    id <ZYJewelryAction> action;
    id <ZYJewelryAnimated> animated;
    ZYJewelryBox *map[MAX_MAP_SIZE][MAX_MAP_SIZE];
}

@end
