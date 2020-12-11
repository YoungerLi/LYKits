//
//  UIImage+LYUtils.h
//  LYCategory <https://github.com/YoungerLi/LYCategory.git>
//
//  Created by 李杨 on 2020/12/11.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (LYUtils)

/**
 加载图片
 优势：不会将图片加到内存缓存中
 适用类型：较大图片的处理
 图片名需加.png/.jpg
 */
+ (UIImage *)imageWithName:(NSString *)imgName;

/**
 根据UIView生成一个图片
 */
+ (UIImage *)imageWithView:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
