//
//  ZYJewelryBox.m
//  ZYJewelry
//
//  Created by Zhiyang Zhao on 11-9-25.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import "ZYJewelryBox.h"

@implementation ZYJewelryBox
@synthesize type;
- (id)init
{
    self = [super init];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}
- (id)initWithType: (ZYJewelryBoxType) _type
{
    [self init];
    type = _type;
    return self;
}
@end
