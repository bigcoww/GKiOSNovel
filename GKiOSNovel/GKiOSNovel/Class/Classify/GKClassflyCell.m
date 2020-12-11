//
//  GKClassflyCell.m
//  GKiOSNovel
//
//  Created by wangws1990 on 2019/6/12.
//  Copyright © 2019 wangws1990. All rights reserved.
//

#import "GKClassflyCell.h"

@implementation GKClassflyCell

- (void)awakeFromNib {
    [super awakeFromNib];
    self.focusBtn.layer.masksToBounds = YES;
    self.focusBtn.layer.cornerRadius = 10;
    self.stateBtn.layer.masksToBounds = YES;
    self.stateBtn.layer.cornerRadius = 7.5f;
    self.focusBtn.layer.borderWidth = 0.6;
    self.focusBtn.layer.borderColor = Appxdddddd.CGColor;
    [self.focusBtn setTitleColor:Appx999999 forState:UIControlStateNormal];
   // [self.focusBtn setBackgroundImage:[UIImage imageWithColor:AppColor] forState:UIControlStateNormal];
//    self.width.constant = SCALEW(80);
//    self.nickNameLab.textColor = AppColor;
    self.nickBtn.layer.masksToBounds = YES;
    self.nickBtn.layer.cornerRadius = 3;
    self.imagV.layer.masksToBounds = YES;
    self.imagV.layer.cornerRadius = AppRadius;
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}
- (void)setModel:(GKBookModel *)model{
    if (_model != model) {
        _model = model;
        [self.imagV setGkImageWithURL:model.cover];
        self.titleLab.text = model.title ?:@"";
        self.nickNameLab.text = model.author ?:@"";
        self.monthLab.text = [NSString stringWithFormat:@"%@",[@(model.latelyFollower) decimalString]];
        [self.focusBtn setTitle:[NSString stringWithFormat:@"关注度:%.2f%@",model.retentionRatio,@"%"] forState:UIControlStateNormal];
        [self.stateBtn setTitle:model.majorCate forState:UIControlStateNormal];

        [self.nickBtn setTitle:model.author forState:UIControlStateNormal];
        NSMutableAttributedString *text = [[NSMutableAttributedString alloc] initWithString:model.shortIntro ?:@""];
        text.lineSpacing = 3;
        text.alignment = NSTextAlignmentLeft;
        self.subTitleLab.attributedText = text;
    }
}
@end
