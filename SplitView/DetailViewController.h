//
//  DetailViewController.h
//  SplitView
//
//  Created by Mike on 14/11/2015.
//  Copyright © 2015 Karelia Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

