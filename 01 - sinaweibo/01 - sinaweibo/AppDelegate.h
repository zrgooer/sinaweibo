//
//  AppDelegate.h
//  01 - sinaweibo
//
//  Created by 梁剑义 on 2016/12/6.
//  Copyright © 2016年 梁剑义. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

