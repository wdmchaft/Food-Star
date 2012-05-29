//
//  Location.h
//  Food-Star
//
//  Created by Johannes Löffler on 5/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Location : NSObject
{
    double latitude;
    double longitude;
    NSString *street;
    NSString *plz;
    NSString *city;
}

@end
