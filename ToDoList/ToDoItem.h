//
//  ToDoItem.h
//  ToDoList
//
//  Created by wang mark on 14-8-26.
//  Copyright (c) 2014年 wang mark. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;
@end
