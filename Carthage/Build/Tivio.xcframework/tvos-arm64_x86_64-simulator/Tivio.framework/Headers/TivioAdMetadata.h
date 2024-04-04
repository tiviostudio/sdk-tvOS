//
//  TivioAdMetadata.h
//  Tivio
//
//  Created by Ladislav Navratil on 10.02.2022.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TivioAdMetadata : NSObject

@property(readonly) BOOL canTriggerSkip;
@property(readonly) BOOL isSkippable;
@property(readonly) NSUInteger order;
@property(readonly) NSString* subType;
@property(readonly) NSUInteger secondsToEnd;
@property(readonly) NSUInteger secondsToSkippable;
@property(readonly) NSUInteger totalCount;
@property(readonly) NSString* type;

@end

NS_ASSUME_NONNULL_END
