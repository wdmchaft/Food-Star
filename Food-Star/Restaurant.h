//
//  Restaurant.h
//  Food-Star
//
//  Created by Johannes Löffler on 5/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Location.h"
#import "Meal.h"
#import "OpeningHours.h"


@interface Restaurant : NSObject
{
    Location *location;
    NSMutableArray *meals;
    OpeningHours *openingHours;
}

@end
