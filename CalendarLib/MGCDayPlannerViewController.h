//
//  MGCDayPlannerViewController.h
//  Graphical Calendars Library for iOS
//
//  Distributed under the MIT License
//  Get the latest version from here:
//
//    https://github.com/jumartin/Calendar
//
//  Copyright (c) 2014-2015 Julien Martin
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//

#import <UIKit/UIKit.h>
#import "MGCDayPlannerView.h"
@class MGCCalendarHeaderView;


/*!
 *  The MGCDayPlannerViewController class creates a controller object that manages a day planner view.
 */
@interface MGCDayPlannerViewController : UIViewController <MGCDayPlannerViewDelegate, MGCDayPlannerViewDataSource>

/*! Returns the day planner view managed by the controller object. */
@property(nonatomic, retain) MGCDayPlannerView *dayPlannerView;

/*! Returns the calendar header view managed by the controller object. */
@property (nonatomic) MGCCalendarHeaderView *headerView;

@property (nonatomic, assign) BOOL showsWeekHeaderView;

@end

