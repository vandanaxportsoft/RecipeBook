//
//  RecipeDetailViewController.h
//  RecipeBook
//
//  Created by Vandana on 19/01/13.
//  Copyright (c) 2013 Sunil Ohri. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeDetailViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *recipeLabel;
@property(nonatomic,strong) NSString *recipeName;
@end
