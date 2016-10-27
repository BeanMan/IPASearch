//
//  ISAppData.h
//  IPASearch
//
//  Created by Wang Jinli on 2016/10/27.
//  Copyright © 2016年 Wang Jinli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ISApp : NSObject

@property NSString *appName;
@property NSString *version;
@property NSString *size;
@property NSURL *iconUrl;
@property NSURL *ipaUrl;

- (id)initWithAppName: (NSString *)appName version: (NSString *)version size: (NSString *)size iconURL: (NSURL *)iconUrl ipaURL: (NSURL *)ipaUrl;

@end