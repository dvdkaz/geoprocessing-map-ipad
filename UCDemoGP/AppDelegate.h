//
//  AppDelegate.h
//  UCDemoGP
//
//  Created by Al Pascual on 7/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CleanUpProcess.h"


@class MapViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) MapViewController *viewController;
@property (nonatomic, strong) NSMutableArray *addedFeaturesArray;
@property (nonatomic, strong) CleanUpProcess *cleanUpProcess;

@end
