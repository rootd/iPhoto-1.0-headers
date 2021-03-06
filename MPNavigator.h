/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "MPActionSupport-Protocol.h"
#import "MPActionableSupport-Protocol.h"
#import "MPAnimationSupport-Protocol.h"
#import "MPGeometrySupport-Protocol.h"
#import "MPLayerableSupport-Protocol.h"
#import "MPNavigatorSupport-Protocol.h"
#import "MPTimingSupport-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MCContainerNavigator, MCPlug, MPNavigatorInternal, NSMutableDictionary;

@interface MPNavigator : _ACAccountTypeIdentifierTwitter <NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport>
{
    MPNavigatorInternal *_internal;
    NSMutableDictionary *_layers;
    NSMutableDictionary *_actions;
    MCPlug *_plug;
    MCContainerNavigator *_navigator;
    id _parent;
    NSMutableDictionary *_animationPaths;
}

- (void)removeActionForKey:(id)fp8;
- (void)setAction:(id)fp8 forKey:(id)fp12;
- (id)actionForKey:(id)fp8;
- (id)actions;
- (void)setStartsPaused:(BOOL)fp8;
- (BOOL)startsPaused;
- (void)setIsTriggered:(BOOL)fp8;
- (BOOL)isTriggered;
- (void)setNumberOfLoops:(double)fp8;
- (double)numberOfLoops;
- (void)setPhaseOutDuration:(double)fp8;
- (double)phaseOutDuration;
- (void)setPhaseInDuration:(double)fp8;
- (double)phaseInDuration;
- (void)setDuration:(double)fp8;
- (double)duration;
- (void)setTimeIn:(double)fp8;
- (double)timeIn;
- (void)setZIndex:(int)fp8;
- (int)zIndex;
- (void)setScale:(float)fp8;
- (float)scale;
- (void)setYRotationAngle:(float)fp8;
- (float)yRotationAngle;
- (void)setXRotationAngle:(float)fp8;
- (float)xRotationAngle;
- (void)setSize:(struct CGSize)fp8;
- (struct CGSize)size;
- (void)setRotationAngle:(float)fp8;
- (float)rotationAngle;
- (void)setZPosition:(float)fp8;
- (float)zPosition;
- (void)setPosition:(struct CGPoint)fp8;
- (struct CGPoint)position;
- (void)setOpacity:(float)fp8;
- (float)opacity;
- (void)removeAnimationPathForKey:(id)fp8;
- (void)setAnimationPath:(id)fp8 forKey:(id)fp12;
- (id)animationPathForKey:(id)fp8;
- (id)animationPaths;
- (id)layers;
- (void)setInitialLayer:(id)fp8;
- (id)initialLayer;
- (void)removeAllLayers;
- (void)removeLayerForKey:(id)fp8;
- (void)setLayer:(id)fp8 forKey:(id)fp12;
- (id)layerForKey:(id)fp8;
- (id)layerKey;
- (id)parent;
- (id)navigatorKey;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)init;

@end

