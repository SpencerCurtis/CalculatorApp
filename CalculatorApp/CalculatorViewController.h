//
//  CalculatorViewController.h
//  CalculatorApp
//
//  Created by Trevor McKendrick on 12/1/12.
//  Copyright (c) 2012 Trevor McKendrick. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CalculatorViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *calculatedNumber;

- (IBAction)numberPressed:(id)sender;
- (IBAction)additionPressed:(id)sender;
- (IBAction)subtractionPressed:(id)sender;


@end
