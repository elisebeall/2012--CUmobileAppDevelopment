//
//  MADViewController.h
//  Favorites
//
//  Created by Elise J Beall on 10/11/12.
//  Copyright (c) 2012 Elise J Beall. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Favorite.h"


@interface MADViewController : UIViewController{
    Favorite *user; //creates the model object
}

- (IBAction)infoButtonTapped:(UIBarButtonItem *)sender;
@property (weak, nonatomic) IBOutlet UITextView *quoteText;
@property (weak, nonatomic) IBOutlet UILabel *wordLabel;

@end
