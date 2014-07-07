//
//  Photo+Flickr.h
//  Shutterbug
//
//  Created by Wang, Chengwen on 6/28/14.
//  Copyright (c) 2014 Wang, Chengwen. All rights reserved.
//

#import "Photo.h"

@interface Photo (Flickr)

+ (Photo *)photoWithFlickrInfo:(NSDictionary *)photoDictionary
        inManagedobjectContext:(NSManagedObjectContext *)context;

+ (void)loadPhotosFromFlickrArray:(NSArray *)photos
         intoManagedObjectContext:(NSManagedObjectContext *)context;

@end
