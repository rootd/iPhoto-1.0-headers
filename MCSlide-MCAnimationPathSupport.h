/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MCSlide.h"

#import "MCAnimationPathSupport-Protocol.h"

@interface MCSlide (MCAnimationPathSupport) <MCAnimationPathSupport>
- (void)removeAllAnimationPaths;
- (void)removeAnimationPathForKey:(id)fp8;
- (void)addAnimationPath:(id)fp8;
- (id)animationPathForKey:(id)fp8;
- (unsigned int)countOfAnimationPaths;
- (id)animationPaths;
- (id)imprintsForAnimationPaths;
- (void)demolishAnimationPaths;
- (void)initAnimationPathsWithImprints:(id)fp8;
@end

