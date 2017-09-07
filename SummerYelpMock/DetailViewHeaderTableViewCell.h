//
//  DetailViewHeaderTableViewCell.h
//  SummerYelpMock
//
//  Created by Yuan Fang on 9/5/17.
//  Copyright © 2017 Yuan Fang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface DetailViewHeaderTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end
