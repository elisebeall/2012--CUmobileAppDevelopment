//
//  MADAppDelegate.h
//  Favorites
//
//  Created by Elise J Beall on 10/11/12.
//  Copyright (c) 2012 Elise J Beall. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Favorite.h"

@class MADViewController;

@interface MADAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) MADViewController *viewController;

@end
