//
//  ProjectXViewController.h
//  ProjectX
//
//  Created by Jirat K on 7/4/55 BE.
//  Copyright (c) 2555 Allianz Global Assistance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProjectXViewController : UIViewController
<UITableViewDataSource,
UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@end
