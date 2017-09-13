//
//  FilterTableViewCell.m
//  SummerYelpMock
//
//  Created by Yuan Fang on 9/12/17.
//  Copyright © 2017 Yuan Fang. All rights reserved.
//

#import "FilterTableViewCell.h"

@interface FilterTableViewCell ()
@property (weak, nonatomic) IBOutlet UISwitch *filter;
@property (weak, nonatomic) IBOutlet UILabel *categoryTitle;

@property (nonatomic) YelpFilterDataModel *dataModel;

@end


@implementation FilterTableViewCell

- (void)updateDataModel:(YelpFilterDataModel *)dataModel
{
    self.dataModel = dataModel;
    self.categoryTitle.text = dataModel.categoryName;
}


- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end