//
// Created by Yao Guai on 16/10/2.
// Copyright (c) 2016 minions.jegarn.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JegarnPacket;


@interface JegarnChatPacketFactory : NSObject
- (JegarnPacket *)getPacket:(NSString *)from to:(NSString *)to type:(NSString *)type content:(id)content;
+ (instancetype)sharedInstance;
@end