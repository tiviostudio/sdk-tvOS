//
//  TivioPlayerWrapper.h
//  sdk
//
//  Created by Ladislav Navratil on 16.01.2022.
//

#import <Foundation/Foundation.h>

#import "TivioPlayerWrapperDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface TivioPlayerWrapper : NSObject

@property(nonatomic) id<TivioPlayerWrapperDelegate> delegate;

- (instancetype)init NS_UNAVAILABLE;

- (void) reportPlaybackEnded;
- (void) reportTimeProgress: (NSUInteger) miliseconds;
- (void) seekTo: (NSUInteger) miliseconds;
- (void) setSource: (TivioPlayerSource*) source calibrationId:(NSString *)calibrationId;
- (void) skipAd;

@end

NS_ASSUME_NONNULL_END
