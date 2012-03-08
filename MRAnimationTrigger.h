/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class MRAction, NSDictionary;

@interface MRAnimationTrigger : _ACAccountTypeIdentifierTwitter
{
    MRAction *_action;
    float _startValue;
    float _lastValue;
    NSDictionary *_animationAttributes;
}

- (id)animationAttributes;
- (void)setLastValue:(float)fp8;
- (float)lastValue;
- (void)setStartValue:(float)fp8;
- (float)startValue;
- (id)action;
- (float)rearmIfNeededWithDefaultValue:(float)fp8;
- (void)disarm;
- (BOOL)isArmed;
- (void)setAction:(id)fp8;
- (void)dealloc;
- (id)initWithAction:(id)fp8;

@end

