//
//  SamNearbyHeaderView.h
//  inke
//
//  Created by Sam on 12/25/16.
//  Copyright © 2016 Zhejiang University of Tech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SamNearbyHeaderView : UICollectionReusableView

@property(nonatomic, strong) UILabel * title;

+ (instancetype)loadHeaderView;
- (instancetype)initWithFrame:(CGRect)frame;


@end
