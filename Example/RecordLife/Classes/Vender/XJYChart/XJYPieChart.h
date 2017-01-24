//
//  XJYPieChart.h
//  RecordLife
//
//  Created by 谢俊逸 on 22/01/2017.
//  Copyright © 2017 谢俊逸. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XJYPieItem.h"
#import "XJYChartDelegate.h"
@interface XJYPieChart : UIView


@property (nonatomic, strong) NSMutableArray<XJYPieItem *> *dataItemArray;
@property (nonatomic, weak) id<XJYChartDelegate> delegate;

/**
 enableAnimation
 Default is YES
 */
@property (nonatomic, assign) BOOL enableAnimation;

/**
 descriptionTextFont default is 16
 */
@property (nonatomic) UIFont  *descriptionTextFont;

/**
 descriptionTextColor default is blackColor
 */
@property (nonatomic) UIColor *descriptionTextColor;
/** Default clear Color. */
@property (nonatomic) UIColor *descriptionTextShadowColor;
/** Default is CGSizeMake(0, 0). */
@property (nonatomic) CGSize   descriptionTextShadowOffset;


/**
 should High light Sector On Touch default is YES
 */
@property (nonatomic, assign) BOOL shouldHighlightSectorOnTouch;

/**
 enable Multiple Selection default is NO
 */
@property (nonatomic, assign) BOOL enableMultipleSelection;

/**
 show Absolute Values
 Default is NO
 */
@property (nonatomic, assign) BOOL showAbsoluteValues;

/**
 hide Value Labels
 Default is NO
 */
@property (nonatomic, assign) BOOL hideValueLabels;

/**
 only Show Values
 default is NO
 */
@property (nonatomic, assign) BOOL onlyShowValues;
@end