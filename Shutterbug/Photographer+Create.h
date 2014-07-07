//
//  Photographer+Create.h
//  Shutterbug
//
//  Created by Wang, Chengwen on 6/28/14.
//  Copyright (c) 2014 Wang, Chengwen. All rights reserved.
//

#import "Photographer.h"

@interface Photographer (Create)

+ (Photographer *)photographerWithName:(NSString *)name
                inManagedObjectContext:(NSManagedObjectContext *)context;

@end
