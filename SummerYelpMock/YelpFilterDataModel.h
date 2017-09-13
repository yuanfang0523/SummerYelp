//
//  YelpFilterDataModel.h
//  SummerYelpMock
//
//  Created by Yuan Fang on 9/12/17.
//  Copyright © 2017 Yuan Fang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YelpFilterDataModel : NSObject

@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, copy) NSString *categoryCode;

+ (NSArray <YelpFilterDataModel *>*)buildDataModelArrayFromDictionaryArray:(NSArray<NSDictionary *> *)dictArray;

@end
