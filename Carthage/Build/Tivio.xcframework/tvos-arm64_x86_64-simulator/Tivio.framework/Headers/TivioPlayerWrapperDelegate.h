//
//  TivioPlayerWrapperDelegate.h
//  Tivio
//
//  Created by Ladislav Navratil on 16.01.2022.
//

@class TivioAdMetadata;
@class TivioMarker;
@class TivioPlayerSource;

@protocol TivioPlayerWrapperDelegate

- (void) onAdMetadata: (TivioAdMetadata*) adMetadata;
- (void) onMarkers: (NSArray<TivioMarker*> *) markers;
- (void) setSource: (TivioPlayerSource*) source;
- (void) seekTo: (NSUInteger) miliseconds;

@end
