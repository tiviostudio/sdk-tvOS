//
//  TivioPlayerSource.h
//  Tivio
//
//  Created by Ladislav Navratil on 16.01.2022.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TivioPlayerSource : NSObject

@property(readonly) NSUInteger startPosition;
@property(readonly) NSString* type;
@property(readonly) NSString* uri;

- (id) initWithChannel:(NSString *)channelName
                  mode:(NSString*) mode
                   uri:(NSString*) uri
               epgFrom: (NSUInteger)epgFrom
                 epgTo: (NSUInteger)epgTo
           streamStart:(NSUInteger)streamStart
     startFromPosition: (NSUInteger) startFromPosition;

- (id) initWithChannel:(NSString *)channelName
                  mode:(NSString*) mode
                   uri:(NSString*) uri
               epgFrom: (NSUInteger)epgFrom
                 epgTo: (NSUInteger)epgTo
           streamStart:(NSUInteger)streamStart
     continueFromPosition: (NSUInteger) continueFromPosition;

@end

NS_ASSUME_NONNULL_END
