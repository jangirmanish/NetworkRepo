//
//  DataViewController.h
//  SampleApp
//
//  Created by Manish Jangir on 21/04/16.
//  Copyright © 2016 Manish Jangir. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end

