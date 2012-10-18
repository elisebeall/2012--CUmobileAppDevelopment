//
//  HWLViewController.h
//  MusicDependent
//
//  Created by  on 10/11/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#define artistComponent 0
#define albumComponent 1

@interface HWLViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource >
@property (weak, nonatomic) IBOutlet UIPickerView *musicPicker;
@property (weak, nonatomic) IBOutlet UILabel *choiceLabel;
@property (strong, nonatomic) NSDictionary *artistAlbums; 
@property (strong, nonatomic) NSArray *artists;
@property (strong, nonatomic) NSArray *albums;


@end
