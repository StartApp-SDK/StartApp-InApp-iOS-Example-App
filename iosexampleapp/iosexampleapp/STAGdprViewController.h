//
//  STAGdprViewController.h
//  iosexampleapp
//
//  Created by tto on 11/5/18.
//  Copyright © 2018 StartApp. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface STAGdprViewController : UIViewController

@property (nonatomic, copy, nullable) void (^completionHandler)(BOOL);

@end

NS_ASSUME_NONNULL_END
