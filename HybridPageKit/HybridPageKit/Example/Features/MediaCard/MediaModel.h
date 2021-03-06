//
//  MediaModel.h
//  HybridPageKit
//
//  Created by dequanzhu.
//  Copyright © 2018 HybridPageKit. All rights reserved.
//
#import "RNSHandler.h"

@interface MediaModel : RNSModel
@property(nonatomic,copy,readonly)NSString *index;
@property(nonatomic,copy,readonly)NSString *mediaId;
@property(nonatomic,copy,readonly)NSString *mediaIcon;
@property(nonatomic,copy,readonly)NSString *mediaName;
@property(nonatomic,copy,readonly)NSString *mediaDes;

- (instancetype)initWithDic:(NSDictionary *)dic;

@end
