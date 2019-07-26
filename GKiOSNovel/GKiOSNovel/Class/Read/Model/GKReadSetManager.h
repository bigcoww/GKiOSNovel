//
//  GKReadManager.h
//  GKiOSNovel
//
//  Created by wangws1990 on 2019/6/19.
//  Copyright © 2019 wangws1990. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger, GKReadThemeState) {
    GKReadDefault =  0,//白天
    GKReadBlack   =  1,//晚上
    GKReadGreen   =  2,//墨绿色
    GKReadCaffee  =  3,//咖啡色
    GKReadPink    =  4,//淡粉
    GKReadFen     =  5,//粉红色
    GKReadZi      =  6,//紫色
    GKReadYellow  =  7,//黄色
};
typedef NS_ENUM(NSInteger, GKBrowseState) {
    GKBrowseDefault    = 0,//默认
    GKBrowsePageCurl   = 1,//仿真
    GKBrowseVertical   = 2,//上下
};
NS_ASSUME_NONNULL_BEGIN
@interface GKReadSkinModel : BaseModel
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *skin;
@property (assign, nonatomic) GKReadThemeState state;
+ (instancetype)vcWithTitle:(NSString *)title skin:(NSString *)skin state:(GKReadThemeState)state;
@end

@interface GKReadSetModel : BaseModel

@property (copy, nonatomic) NSString *color;//文字颜色
@property (copy, nonatomic) NSString *fontName;//字体名称
@property (assign, nonatomic) CGFloat font;//文字大小
@property (assign, nonatomic) CGFloat lineSpacing;//段落 行间距
@property (assign, nonatomic) CGFloat firstLineHeadIndent;//段落 行间距
@property (assign, nonatomic) CGFloat paragraphSpacingBefore;//段间距，当前段落和上个段落之间的距离。
@property (assign, nonatomic) CGFloat paragraphSpacing;//段间距，当前段落和下个段落之间的距离。
@property (assign, nonatomic) CGFloat brightness;//亮度
@property (assign, nonatomic) BOOL landscape;//是否是横屏
@property (assign, nonatomic) BOOL traditiona;//繁体
@property (assign, nonatomic) GKReadThemeState state;//皮肤控制
@property (assign, nonatomic) GKBrowseState browseState;//阅读方式

@end
@interface GKReadSetManager : NSObject
@property (strong, nonatomic,readonly)GKReadSetModel *model;
+ (instancetype)shareInstance;

+ (void)setLandscape:(BOOL)landscape;//横屏
+ (void)setTraditiona:(BOOL)traditiona;//设置繁体
+ (void)setBrightness:(CGFloat)brightness;//切换亮度
+ (void)setFontName:(NSString *)fontName;//设置字体名称
+ (void)setFont:(CGFloat)font;//设置字体大小
+ (void)setReadState:(GKReadThemeState)state;//切换皮肤
+ (void)setBrowseState:(GKBrowseState)browseState;//阅读方式

+ (NSDictionary *)defaultFont;
+ (UIImage *)defaultSkin;
+ (NSArray *)defaultSkinDatas;
+ (NSString *)convertToTraditional:(NSString *)simpString;
+ (BOOL)registerFontName;
@end

NS_ASSUME_NONNULL_END
