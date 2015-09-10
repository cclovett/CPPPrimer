//
//  Entity.h
//  
//
//  Created by Cc on 15/8/20.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Entity : NSManagedObject

@property (nonatomic, retain) NSString * dlName;
@property (nonatomic, retain) NSString * dlKey;

@end
