//
//  FSFood.h
//  Tracker
//
//  Created by Parker Wightman on 11/27/12.
//  Copyright (c) 2012 Mysterious Trousers. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSFood : NSObject

@property (nonatomic, strong, readonly) NSString *foodDescription;
@property (nonatomic, strong, readonly) NSString *foodName;
@property (nonatomic, strong, readonly) NSString *foodType;
@property (nonatomic, strong, readonly) NSString *foodURL;
@property (nonatomic, strong, readonly) NSString *brandName;
@property (nonatomic, assign, readonly) NSInteger foodID;

@property (nonatomic, strong, readonly) NSArray *servings;


+ (id) foodWithJSON:(NSDictionary *)json;

@end
