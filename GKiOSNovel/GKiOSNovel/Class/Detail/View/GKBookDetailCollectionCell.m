//
//  GKBookDetailCollectionCell.m
//  GKiOSNovel
//
//  Created by wangws1990 on 2019/6/15.
//  Copyright © 2019 wangws1990. All rights reserved.
//

#import "GKBookDetailCollectionCell.h"

@implementation GKBookDetailCollectionCell

- (void)awakeFromNib {
    [super awakeFromNib];
    self.collectionBtn.layer.masksToBounds = YES;
    self.collectionBtn.layer.cornerRadius  = AppRadius;
    self.counLab.textColor = AppColor;
    [self.collectionBtn setBackgroundColor:AppColor];
    // Initialization code
}
- (void)setModel:(GKBookModel *)model{
    if (_model != model) {
        _model = model;
        [self.imageV setGkImageWithURL:model.cover];
        self.titleLab.text = model.title ?:@"";
        self.counLab.text = model.author ?: @"";
        
        NSMutableAttributedString *text = [[NSMutableAttributedString alloc] initWithString:model.shortIntro ?:@""];
        text.lineSpacing = 3;
        text.alignment = NSTextAlignmentLeft;
        self.subTitleLab.attributedText = text;
        
//        self.counLab.text = [NSString stringWithFormat:@"%@本书",@(model.bookCount)];
//        [self.collectionBtn setTitle:[NSString stringWithFormat:@"%@人收藏",@(model.collectorCount)] forState:UIControlStateNormal];
    }
}
@end
