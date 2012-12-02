//
//  CalculatorAppDelegate.h
//  CalculatorApp
//
//  Created by Trevor McKendrick on 12/1/12.
//  Copyright (c) 2012 Trevor McKendrick. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CalculatorViewController;

@interface CalculatorAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) CalculatorViewController *viewController;

@end
