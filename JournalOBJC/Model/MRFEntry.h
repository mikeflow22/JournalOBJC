//
//  MRFEntry.h
//  JournalOBJC
//
//  Created by Michael Flowers on 10/8/19.
//  Copyright © 2019 Michael Flowers. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MRFEntry : NSObject
@property (nonatomic, copy, readonly) NSString * timestamp;
@property (nonatomic, copy, readonly) NSDate * title;
@property (nonatomic, readonly )NSString * bodyText;

- (instancetype)initWithTitle:(NSString *)title bodyText:(NSString *)bodyText timestamp:(NSDate *)timestamp;
@end

NS_ASSUME_NONNULL_END
