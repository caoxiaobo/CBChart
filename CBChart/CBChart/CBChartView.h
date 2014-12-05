//
//  CBChartView.h
//  CBChart
//
//  Created by pacific on 14/12/1.
//  Copyright (c) 2014年 pacific. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    CBChartTypeLine,
    CBChartTypeBar
} CBChartType;

@interface CBChartView : UIView

+(instancetype)charView;
/*
 * x坐标的值和y坐标的值
 * coordinate values, chart will draw itself on layer
 * try to value string to xValues' element or yValues' element
 */
@property (strong, nonatomic) NSArray *xValues;
@property (strong, nonatomic) NSArray *yValues;

// 是否需要虚线网格
@property (assign, nonatomic) BOOL isDrawDashLine;
// 关闭坐标系动画
@property (assign, nonatomic) BOOL shutDefaultAnimation;
// default is 4
@property (assign, nonatomic) int yValueCount;
// 图表类型
@property (assign, nonatomic) CBChartType chartType;

@end

