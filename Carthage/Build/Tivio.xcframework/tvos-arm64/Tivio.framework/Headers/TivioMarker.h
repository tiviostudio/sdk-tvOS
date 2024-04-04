//
//  TivioMarker.h
//  Tivio
//
//  Created by Ladislav Navratil on 19.02.2022.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TivioMarker : NSObject

@property(nonatomic, readonly) NSInteger from;
@property(nonatomic, readonly) NSInteger relativeFromMs;
@property(nonatomic, readonly) NSInteger relativeToMs;
@property(nonatomic, readonly) NSInteger to;
@property(nonatomic, readonly) NSString* type;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
