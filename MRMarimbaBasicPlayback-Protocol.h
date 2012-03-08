/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@protocol MRMarimbaBasicPlayback
- (id)renderer;
- (void)setDisplaysFPS:(BOOL)fp8;
- (BOOL)displaysFPS;
- (void)setStopWithVideo:(BOOL)fp8;
- (BOOL)stopWithVideo;
- (void)setVolume:(float)fp8;
- (float)volume;
- (BOOL)isPlaying;
- (double)timeRemaining;
- (void)setTime:(double)fp8;
- (double)time;
- (void)setDocument:(id)fp8;
- (id)document;
- (void)unlockRendering;
- (void)lockRendering;
- (void)swipeAt:(struct CGPoint)fp8 inDirection:(unsigned int)fp16 withModifiers:(unsigned int)fp20;
- (void)hitCanceledForKey:(id)fp8;
- (void)hitForKey:(id)fp8 endsAt:(struct CGPoint)fp12 withModifiers:(unsigned int)fp20;
- (void)hitForKey:(id)fp8 tracksAt:(struct CGPoint)fp12 hitCount:(int)fp20 withModifiers:(unsigned int)fp24;
- (void)hitForKey:(id)fp8 startsAt:(struct CGPoint)fp12 hitCount:(int)fp20 withModifiers:(unsigned int)fp24;
- (void)warmupRenderer;
- (void)requestRendering:(BOOL)fp8;
- (struct CGImage *)snapshotAsCGImage;
- (struct CGImage *)snapshotAsCGImageForTime:(double)fp8 withSize:(struct CGSize)fp16;
- (void)prevFrame;
- (void)nextFrame;
- (void)gotoEnd;
- (void)gotoBeginning;
- (void)goForth;
- (void)goBack;
- (void)pause;
- (void)play;
- (void)togglePlayback;
@end

