//
//  SamMeInfoView.h
//  inke
//
//  Created by Sam on 12/22/16.
//  Copyright © 2016 Zhejiang University of Tech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SamMeInfoView : UIView

@property (weak, nonatomic) IBOutlet UIImageView *headImageView;


+ (instancetype)loadInfoView;

@end
