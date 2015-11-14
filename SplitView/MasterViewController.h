//
//  MasterViewController.h
//  SplitView
//
//  Created by Mike on 14/11/2015.
//  Copyright © 2015 Karelia Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

