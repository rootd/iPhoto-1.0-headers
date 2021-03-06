/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MPEffect.h"

@interface MPEffect (Private)
- (id)effectPresetID;
- (id)videoPaths;
- (id)fullDebugLog;
- (void)dump;
- (void)setFullDuration:(double)fp8;
- (double)fullDuration;
- (void)reconfigureSlides;
- (void)createSecondarySlidesWithPaths:(id)fp8;
- (void)createSlidesWithPaths:(id)fp8;
- (void)createTextsWithStrings:(id)fp8 secondLineFactor:(float)fp12 fillIn:(BOOL)fp16;
- (void)createTextsWithStrings:(id)fp8 secondLineFactor:(float)fp12;
- (void)replaceTextsWitStrings:(id)fp8;
- (void)createTextsWithDefaultStrings;
- (id)plug;
- (id)container;
- (void)setLiveIndex:(int)fp8;
- (int)liveIndex;
- (int)maxNumberOfSecondarySlides;
- (int)maxNumberOfSlides;
@end

