/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MCAction.h"

@class NSString;

@interface MCStateOperation : MCAction
{
    NSString *_operation;
    NSString *_stateKey;
}

+ (id)stateOperationForTargetPlugObjectID:(id)fp8 withOperation:(id)fp12 andStateKey:(id)fp16;
- (void)setStateKey:(id)fp8;
- (id)stateKey;
- (void)setOperation:(id)fp8;
- (id)operation;
- (void)_copySelfToSnapshot:(id)fp8;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)fp8;

@end

