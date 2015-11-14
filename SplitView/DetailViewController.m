//
//  DetailViewController.m
//  SplitView
//
//  Created by Mike on 14/11/2015.
//  Copyright © 2015 Karelia Software. All rights reserved.
//

#import "DetailViewController.h"

@implementation DetailViewController

- (void)viewWillAppear:(BOOL)animated {
	self.splitViewController.preferredDisplayMode = UISplitViewControllerDisplayModeAllVisible;
	self.splitViewController.preferredDisplayMode = UISplitViewControllerDisplayModeAutomatic;
	self.navigationItem.leftBarButtonItem = self.splitViewController.displayModeButtonItem;
}

@end
