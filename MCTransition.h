/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MCAction.h"

@class NSMutableDictionary, NSString;

@interface MCTransition : MCAction
{
    NSMutableDictionary *_transitionAttributes;
    NSString *_transitionID;
    double _transitionDuration;
    NSString *_transitionDestinationPlugID;
}

+ (id)transitionForTargetPlugObjectID:(id)fp8 withTransitionID:(id)fp12;
- (void)setTransitionDestinationPlugID:(id)fp8;
- (id)transitionDestinationPlugID;
- (void)setTransitionAttributes:(id)fp8;
- (id)transitionAttributes;
- (double)transitionDuration;
- (void)setTransitionID:(id)fp8;
- (id)transitionID;
- (void)_copySelfToSnapshot:(id)fp8;
- (void)setTransitionDuration:(double)fp8;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)fp8;

@end

