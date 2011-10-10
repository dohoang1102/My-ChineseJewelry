//
//  ZYJewelryMap.m
//  ZYJewelry
//
//  Created by Zhiyang Zhao on 11-9-25.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import "ZYJewelryMap.h"
#import "ZYJewelryBox.h"

@implementation ZYJewelryMap

- (id)init
{
    self = [super init];
    if (self) {
        // Initialization code here.
        for(int y = 0; y < MAX_MAP_SIZE; y++) {
            for (int x = 0; x < MAX_MAP_SIZE; x++) {
                if (y < MAP_TOP_EDGE \
                    || y > MAP_BUTTOM_EDGE \
                    || x < MAP_LEFT_EDGE \
                    || x > MAP_RIGHT_EDGE) {
                    map[y][x] = [[ZYJewelryBox alloc] initWithType: JEWELRY_TYPE_WALL];
                } else {
                    map[y][x] = [[ZYJewelryBox alloc] initWithType: JEWELRY_TYPE_NONE];
                }
            } //end of x
        } //end of y
    }
    
    return self;
}

@end
