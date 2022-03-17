//
//  WNPlayerFrame.h
//  PlayerDemo
//
//  Created by zhengwenming on 2018/10/15.
//  Copyright © 2018年 wenming. All rights reserved.
//

@class WNPlayerVideoFrame;

#import <UIKit/UIKit.h>

@interface WNDisplayView : UIView
@property (nonatomic,assign) CGSize contentSize;
@property (nonatomic,assign) CGFloat rotation;
@property (nonatomic,assign) BOOL isYUV;
@property (nonatomic,assign) BOOL keepLastFrame;
+ (UIImage *)glToUIImage:(CGSize)size;
- (void)render:(WNPlayerVideoFrame *)frame;
- (void)clear;
@end

