//
//  WelfareViewController.h
//  CosFund
//
//  Created by vivian on 15/9/22.
//  Copyright © 2015年 ZFJ. All rights reserved.
//

#import "BaseViewController.h"

@interface WelfareViewController : BaseViewController<UITableViewDataSource,UITableViewDelegate>{
    
}
@property (weak, nonatomic) IBOutlet UITableView *WelfareTableView;

@end
