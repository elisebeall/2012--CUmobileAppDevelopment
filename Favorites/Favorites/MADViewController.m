//
//  MADViewController.m
//  Favorites
//
//  Created by Elise J Beall on 10/11/12.
//  Copyright (c) 2012 Elise J Beall. All rights reserved.
//

#import "MADViewController.h"
#import "InfoViewController.h"

@interface MADViewController ()

@end

@implementation MADViewController
@synthesize wordLabel;
@synthesize quoteText;

//set the username and userquote just before the view appears
-(void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:YES];
    wordLabel.text=user.word;
    quoteText.text=user.quote;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    user=[[Favorite alloc]init]; //initializes the user object
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
    
    [self setWordLabel:nil];
    [self setQuoteText:nil];
}

- (IBAction)infoButtonTapped:(UIBarButtonItem *)sender {
    NSLog(@"info button tapped");
    //initialize view controller
    InfoViewController *infoViewController=[[InfoViewController alloc]init];
    //set transition style to flip horizontal transition
    infoViewController.modalTransitionStyle=UIModalTransitionStyleFlipHorizontal;
    //updates the userInfo property on the infoViewController so it points to the user model
    infoViewController.userInfo=user;
    
    //present the inforViewController
    [self presentViewController:infoViewController animated:YES completion:NULL];
}
@end
