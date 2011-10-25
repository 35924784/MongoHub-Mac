//
//  MHDatabaseItem.h
//  MongoHub
//
//  Created by Jérôme Lebel on 24/10/11.
//  Copyright (c) 2011 ThePeppersStudio.COM. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MHServerItem;
@class MHCollectionItem;

@interface MHDatabaseItem : NSObject
{
    MHServerItem *_serverItem;
    NSString *_name;
    NSMutableArray *_collectionItems;
    id _mongoDatabase;
}

@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly, assign) MHServerItem *serverItem;
@property (nonatomic, readonly, retain) NSArray *collectionItems;
@property (nonatomic, readonly, retain) id mongoDatabase;

- (id)initWithServerItem:(MHServerItem *)serverItem name:(NSString *)name;
- (BOOL)updateChildrenWithList:(NSArray *)list;
- (MHCollectionItem *)collectionItemWithName:(NSString *)databaseName;
- (void)removeCollectionItemWithName:(NSString *)name;

@end
