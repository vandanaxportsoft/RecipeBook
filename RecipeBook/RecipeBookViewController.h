//
//  RecipeBookViewController.h
//  RecipeBook
//
//  Created by Vandana on 18/01/13.
//  Copyright (c) 2013 Sunil Ohri. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeBookViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end
