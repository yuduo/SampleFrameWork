//
//  DetailViewController.h
//  test
//
//  Created by michael on 14-10-14.
//  Copyright (c) 2014年 michael. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

