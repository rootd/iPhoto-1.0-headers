/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MPAction.h"

@class NSString;

@interface MPStateOperation : MPAction
{
    NSString *_operation;
    NSString *_stateKey;
}

+ (id)stateOperation;
- (id)stateKey;
- (id)operation;
- (void)setAction:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)encodeWithCoder:(id)fp8;
- (void)setStateKey:(id)fp8;
- (void)setOperation:(id)fp8;
- (void)dealloc;
- (id)initWithCoder:(id)fp8;
- (id)init;

@end

