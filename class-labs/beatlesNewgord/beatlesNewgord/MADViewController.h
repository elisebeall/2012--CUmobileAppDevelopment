//
//  MADViewController.h
//  beatlesNewgord
//
//  Created by Alexia Newgord on 9/13/12.
//  Copyright (c) 2012 Alexia Newgord. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MADViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *beatlesImage;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
- (IBAction)changeImage:(UISegmentedControl *)sender;
@property (weak, nonatomic) IBOutlet UISegmentedControl *imageControl;
@property (weak, nonatomic) IBOutlet UISwitch *capitalizedSwitch;
- (IBAction)updateFont:(UISwitch *)sender;
@property (weak, nonatomic) IBOutlet UILabel *fontSizeNumberLabel;
- (IBAction)changeFontSize:(UISlider *)sender;

@end
