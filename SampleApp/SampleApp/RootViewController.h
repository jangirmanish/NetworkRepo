//
//  RootViewController.h
//  SampleApp
//
//  Created by Manish Jangir on 21/04/16.
//  Copyright © 2016 Manish Jangir. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end

