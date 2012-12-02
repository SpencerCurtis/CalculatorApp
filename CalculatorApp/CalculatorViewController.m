//
//  CalculatorViewController.m
//  CalculatorApp
//
//  Created by Trevor McKendrick on 12/1/12.
//  Copyright (c) 2012 Trevor McKendrick. All rights reserved.
//

#import "CalculatorViewController.h"

@interface CalculatorViewController ()

@end

@implementation CalculatorViewController



- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.


}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)numberPressed:(UIButton*)sender
{
	NSString *digit = [sender currentTitle]; 
	
	self.calculatedNumber.text = [self.calculatedNumber.text stringByAppendingString:digit];	
	
}

- (IBAction)additionPressed:(id)sender {
}

- (IBAction)subtractionPressed:(id)sender {
}

@end
