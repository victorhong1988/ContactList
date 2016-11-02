//
//  History.h
//  ContactList
//
//  Created by Victor Hong on 01/11/2016.
//  Copyright © 2016 Victor Hong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface History : NSObject

@property NSMutableArray *historyList;

-(instancetype)init;

-(void)addHistory:(NSString *)history;

@end
