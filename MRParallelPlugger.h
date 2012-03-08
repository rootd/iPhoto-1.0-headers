/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class MCAnimationPath, MCPlugParallel;

@interface MRParallelPlugger : _ACAccountTypeIdentifierTwitter
{
    MCPlugParallel *mPlug;
    MCAnimationPath *mAnimationPathParam1;
    MCAnimationPath *mAnimationPathParam2;
    MCAnimationPath *mAnimationPathXY;
    MCAnimationPath *mAnimationPathX;
    MCAnimationPath *mAnimationPathY;
    MCAnimationPath *mAnimationPathZ;
    MCAnimationPath *mAnimationPathScale;
    MCAnimationPath *mAnimationPathRX;
    MCAnimationPath *mAnimationPathRY;
    MCAnimationPath *mAnimationPathRZ;
    MCAnimationPath *mAnimationPathOpacity;
    BOOL mNeedsUpdate;
    BOOL mPlugWasSetSinceLastRendering;
}

- (void)setNeedsUpdate:(BOOL)fp8;
- (BOOL)needsUpdate;
- (id)plug;
- (void)setPlug:(id)fp8;
- (BOOL)applyAtTime:(double)fp8 toSublayer:(id)fp16 withArguments:(id)fp20;
- (void)dealloc;
- (id)init;

@end

