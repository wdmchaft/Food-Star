//
//  OpeningHours.h
//  Food-Star
//
//  Created by Johannes Löffler on 5/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OpeningHours : NSObject
{
    NSDate *open;
    NSDate *close;
    NSString *restDay;
}

@end
