//
//  InfoViewController.h
//  Favorites
//
//  Created by Elise J Beall on 10/11/12.
//  Copyright (c) 2012 Elise J Beall. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Favorite.h"

@interface InfoViewController : UIViewController <UITextFieldDelegate, UITextViewDelegate>
- (IBAction)doneButtonTapped:(UIBarButtonItem *)sender;
@property (weak, nonatomic) IBOutlet UITextView *userQuote;
@property (weak, nonatomic) IBOutlet UITextField *userWord;
@property (strong,nonatomic) Favorite *userInfo;

@end
