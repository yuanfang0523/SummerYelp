//
//  YelpTableViewCell.h
//  SummerYelpMock
//
//  Created by Yuan Fang on 8/29/17.
//  Copyright © 2017 Yuan Fang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface YelpTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end
