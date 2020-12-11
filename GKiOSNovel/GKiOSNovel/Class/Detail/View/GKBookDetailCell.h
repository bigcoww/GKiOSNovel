//
//  GKBookDetailCell.h
//  GKiOSNovel
//
//  Created by wangws1990 on 2019/6/15.
//  Copyright © 2019 wangws1990. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GKBookDetailModel.h"


@interface GKBookDetailCell : UIView
@property (strong, nonatomic) UIImageView *backImageView;
@property (weak, nonatomic) IBOutlet UIImageView *imageV;
@property (weak, nonatomic) IBOutlet UILabel *contentLab;
@property (weak, nonatomic) IBOutlet UILabel *titleLab;
@property (weak, nonatomic) IBOutlet UILabel *subTitleLab;
@property (weak, nonatomic) IBOutlet UILabel *detailTitleLab;
@property (weak, nonatomic) IBOutlet UILabel *wordLab;


@property (weak, nonatomic) IBOutlet NSLayoutConstraint *top;

@property (weak, nonatomic) IBOutlet UILabel *nickNameLab;
@property (weak, nonatomic) IBOutlet UIButton *moreBtn;
@property (weak, nonatomic) IBOutlet UIButton *stateBtn;

@property (strong, nonatomic) GKBookDetailModel *model;

+ (CGFloat)heightForWidth:(CGFloat)width model:(GKBookDetailModel *)model;
@end


