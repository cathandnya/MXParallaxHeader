// MXScrollViewController.h
// Copyright (c) 2019 Maxime Epain

#pragma once
#import <UIKit/UIKit.h>
#import "MXScrollView.h"
@class MXParallaxHeader;

NS_ASSUME_NONNULL_BEGIN

@interface MXScrollViewController : UIViewController
@property (nonatomic, readonly) MXScrollView *scrollView;
@property (nonatomic, strong, nullable) UIViewController *headerViewController;
@property (nonatomic, strong, nullable) UIViewController *childViewController;
@end

@interface UIViewController (MXParallaxHeader)
@property (nonatomic, readonly, nullable) MXParallaxHeader *parallaxHeader;
@end

@interface MXParallaxHeaderSegue : UIStoryboardSegue
@end

@interface MXScrollViewControllerSegue : UIStoryboardSegue
@end

NS_ASSUME_NONNULL_END
