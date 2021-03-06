/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MCAction.h"

@class NSMutableDictionary, NSString;

@interface MCAnimationTrigger : MCAction
{
    NSMutableDictionary *_animationAttributes;
    NSString *_animationKey;
}

+ (id)animationTriggerForTargetPlugObjectID:(id)fp8 withAnimationKey:(id)fp12;
- (void)setAnimationAttributes:(id)fp8;
- (id)animationAttributes;
- (void)setAnimationKey:(id)fp8;
- (id)animationKey;
- (void)_copySelfToSnapshot:(id)fp8;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)fp8;

@end

