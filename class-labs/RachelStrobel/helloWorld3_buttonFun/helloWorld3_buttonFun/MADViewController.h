//
//  MADViewController.h
//  helloWorld3_buttonFun
//
//  Created by Rachel Strobel on 9/19/12.
//  Copyright (c) 2012 Rachel Strobel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MADViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *nyTeamImage;
@property (weak, nonatomic) IBOutlet UILabel *messageField;
- (IBAction)chooseTeam:(UIButton *)sender;


@end
