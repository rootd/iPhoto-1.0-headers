/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MRTransition.h"

@interface MRTransitionPageFlip : MRTransition
{
    struct {
        CDAnonymousStruct7;
        CDAnonymousStruct7;
        struct {
            float;
            float;
        };
    } *mMesh;
}

- (void)renderAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (BOOL)prerenderForTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)setAttributes:(id)fp8;
- (void)buildMesh;
- (void)releaseByTransitioner:(id)fp8;
- (void)cleaup;
- (id)initWithTransitionID:(id)fp8;

@end
