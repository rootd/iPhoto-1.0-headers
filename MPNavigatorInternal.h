/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class NSMutableDictionary, NSString;

@interface MPNavigatorInternal : _ACAccountTypeIdentifierTwitter
{
    NSString *startPlugID;
    float opacity;
    struct CGPoint position;
    float zPosition;
    struct CGSize size;
    float rotationAngle;
    float xRotationAngle;
    float yRotationAngle;
    float scale;
    int zIndex;
    NSString *uuid;
    double numberOfLoops;
    double duration;
    double timeIn;
    double phaseInDuration;
    double phaseOutDuration;
    NSMutableDictionary *layerKeyDictionary;
    BOOL isTriggered;
    BOOL startsPaused;
}

- (void)setLayerKeyDictionary:(id)fp8;
- (id)layerKeyDictionary;
- (void)setPhaseOutDuration:(double)fp8;
- (double)phaseOutDuration;
- (void)setPhaseInDuration:(double)fp8;
- (double)phaseInDuration;
- (void)setStartsPaused:(BOOL)fp8;
- (BOOL)startsPaused;
- (void)setIsTriggered:(BOOL)fp8;
- (BOOL)isTriggered;
- (void)setTimeIn:(double)fp8;
- (double)timeIn;
- (void)setDuration:(double)fp8;
- (double)duration;
- (void)setNumberOfLoops:(double)fp8;
- (double)numberOfLoops;
- (void)setUuid:(id)fp8;
- (id)uuid;
- (void)setZIndex:(int)fp8;
- (int)zIndex;
- (void)setScale:(float)fp8;
- (float)scale;
- (void)setYRotationAngle:(float)fp8;
- (float)yRotationAngle;
- (void)setXRotationAngle:(float)fp8;
- (float)xRotationAngle;
- (void)setRotationAngle:(float)fp8;
- (float)rotationAngle;
- (void)setSize:(struct CGSize)fp8;
- (struct CGSize)size;
- (void)setZPosition:(float)fp8;
- (float)zPosition;
- (void)setPosition:(struct CGPoint)fp8;
- (struct CGPoint)position;
- (void)setOpacity:(float)fp8;
- (float)opacity;
- (void)setStartPlugID:(id)fp8;
- (id)startPlugID;
- (void)dealloc;
- (void)finalize;

@end
