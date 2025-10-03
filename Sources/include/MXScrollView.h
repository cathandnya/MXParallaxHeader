// MXScrollView.h
// Copyright (c) 2019 Maxime Epain

#pragma once

#import <UIKit/UIKit.h>
@class MXParallaxHeader;
@class UIScrollView;

NS_ASSUME_NONNULL_BEGIN

@class MXScrollView;

/**
 The delegate of a MXScrollView object may adopt the MXScrollViewDelegate protocol to control subview's scrolling effect.
 */
@protocol MXScrollViewDelegate <UIScrollViewDelegate>

@optional
/**
 Asks the page if the scrollview should scroll with the subview.
 
 @param scrollView The scrollview. This is the object sending the message.
 @param subView    An instance of a sub view.
 
 @return YES to allow scrollview and subview to scroll together. YES by default.
 */
- (BOOL)scrollView:(MXScrollView *)scrollView shouldScrollWithSubView:(UIScrollView *)subView;

@end

/**
 The MXScrollView is a UIScrollView subclass with the ability to hook the vertical scroll from its subviews.
 */
@interface MXScrollView : UIScrollView

/**
 Delegate instance that adopt the MXScrollViewDelegate.
 */
@property (nonatomic, weak, nullable) IBOutlet id<MXScrollViewDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
