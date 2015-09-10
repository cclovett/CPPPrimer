//
//  NSManagedObjectContext+c.h
//  pg_edit_sdk_common
//
//  Created by Cc on 15/7/28.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObjectContext (pg_common_unitils)

/**
 *  保存到主线
 *
 *  @return YES＝成功
 */
- (BOOL)pSaveContext;


/**
 *  通过 NSManagedObjectID 获取 NSManagedObject
 */
- (NSManagedObject *)pGotManagedObject:(NSManagedObject *)obj;


/**
 *  通过 NSManagedObjectID 获取 NSManagedObject
 *
 *  @param objectIDs List< NSManagedObject >
 *
 *  @return NSManagedObject Array
 */
- (NSArray *)pGotManagedObjectList:(NSArray *)objects;


/**
 *  查询
 *
 *  @param anEntityClass   必选   NSManagedObject class
 *  @param predicates      可选   条件
 *  @param sortDescriptors 可选   排序
 *
 *  @return NSManagedObject / nil
 */
- (NSManagedObject *)pSearchDataFirstByEntityName:(Class)anEntityClass
                                   withPredicates:(NSArray *)predicates
                              withSortDescriptors:(NSArray *)sortDescriptors;


/**
 *  查询
 *
 *  @param anEntityClass   必选   NSManagedObject class
 *  @param predicates      可选   条件
 *  @param sortDescriptors 可选   排序
 *
 *  @return NSManagedObject Array
 */
- (NSArray *)pSearchDataArrayByEntityName:(Class)anEntityClass
                           withPredicates:(NSArray *)predicates
                      withSortDescriptors:(NSArray *)sortDescriptors;


/**
 *  分组
 *
 *  @param anEntityClass   必选   NSManagedObject class
 *  @param predicates      可选   条件 
 *  {
        NSPredicate *condition1 = [NSPredicate predicateWithFormat:@"K1 > %@", v1];
        NSPredicate *condition2 = [NSPredicate predicateWithFormat:@"K2 = %@", v2];
        predicates ＝ @[condition1, condition2];
 *  }
 *  @param sortDescriptors 必选   排序
 *  @param aSectionKeyPath 必选   分组
 *
 *  @return NSFetchedResultsController
 */
- (NSFetchedResultsController *)pGotFetchControllerByEntityName:(Class)anEntityClass
                                                 withPredicates:(NSArray *)predicates
                                            withSortDescriptors:(NSArray *)sortDescriptors
                                         withSectionNameKeyPath:(NSString *)aSectionKeyPath;

@end
