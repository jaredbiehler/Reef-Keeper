//
//  ReefKeeperMasterViewController.h
//  Reef Keeper
//
//  Created by Jared Biehler on 2/17/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ReefKeeperDetailViewController;

#import <CoreData/CoreData.h>

@interface ReefKeeperMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) ReefKeeperDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
