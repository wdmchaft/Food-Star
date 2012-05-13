//
//  Food_StarAppDelegate.h
//  Food-Star
//
//  Created by Johannes Löffler on 5/13/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface Food_StarAppDelegate : UIResponder <UIApplicationDelegate>
{
    CLLocationManager *locationManager;
    
}

@property (strong, nonatomic) UIWindow *window;

@end