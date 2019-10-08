//
//  MRFEntry.m
//  JournalOBJC
//
//  Created by Michael Flowers on 10/8/19.
//  Copyright © 2019 Michael Flowers. All rights reserved.
//

#import "MRFEntry.h"

@implementation MRFEntry

- (instancetype)initWithTitle:(NSString *)title bodyText:(NSString *)bodyText timestamp:(NSDate *)timestamp
{
    self = [super init];
    if (self)
    {
        _title = title;
        _bodyText = bodyText;
        _timestamp = [[NSDate alloc] init];
    }
    return self;
}
@end
