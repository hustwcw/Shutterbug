//
//  Photo.h
//  Shutterbug
//
//  Created by Wang, Chengwen on 6/28/14.
//  Copyright (c) 2014 Wang, Chengwen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Photographer;

@interface Photo : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * subtitle;
@property (nonatomic, retain) NSString * imageURL;
@property (nonatomic, retain) NSString * unique;
@property (nonatomic, retain) NSString * thumbURL;
@property (nonatomic, retain) Photographer *whoTook;

@end
