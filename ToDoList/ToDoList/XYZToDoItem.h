//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Sally Ouyang on 2014-06-24.
//
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
