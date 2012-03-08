/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MCContainer.h"

@class MCPlugHaven, NSMutableDictionary, NSString;

@interface MCContainerNavigator : MCContainer
{
    NSMutableDictionary *mPlugs;
    NSString *mStartPlugID;
    MCPlugHaven *mStartPlug;
}

- (id)startPlug;
- (id)startPlugID;
- (void)setStartPlugID:(id)fp8;
- (void)removeAllPlugs;
- (void)removePlugForID:(id)fp8;
- (void)removePlug:(id)fp8;
- (void)changeIDOfPlug:(id)fp8 toID:(id)fp12;
- (id)setPlugForContainer:(id)fp8 forID:(id)fp12;
- (id)plugForID:(id)fp8;
- (unsigned int)countOfPlugs;
- (id)plugs;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)fp8 andMontage:(id)fp12;
- (id)init;

@end
