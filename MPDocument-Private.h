/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MPDocument.h"

@interface MPDocument (Private)
- (int)mediaTypeForPath:(id)fp8;
- (double)durationForPath:(id)fp8;
- (double)stopTimeForPath:(id)fp8;
- (double)startTimeForPath:(id)fp8;
- (struct CGSize)resolutionForPath:(id)fp8;
- (id)elements;
- (id)uuid;
- (void)reconnectAllTransitions;
- (int)antialiasLevel;
- (double)posterTime;
- (id)allSongs;
- (id)allSlides:(BOOL)fp8;
- (id)allSlides;
- (id)allEffects;
- (id)allEffectContainers;
- (id)outroEffect;
- (id)titleEffect;
- (id)documentAttributes;
- (id)fullDebugLog;
- (void)dump;
- (id)montage;
@end
