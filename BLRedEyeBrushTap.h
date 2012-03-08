/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "AutoEncodeDecodeObject.h"

@class NSDictionary;

@interface BLRedEyeBrushTap : AutoEncodeDecodeObject
{
    double m_timestamp;
    int m_destinationWidth;
    struct CGPoint m_point;
    NSDictionary *m_eyeRepairData;
}

- (void)setEyeRepairData:(id)fp8;
- (id)eyeRepairData;
- (void)setPoint:(struct CGPoint)fp8;
- (struct CGPoint)point;
- (void)setDestinationWidth:(int)fp8;
- (int)destinationWidth;
- (void)setTimestamp:(double)fp8;
- (double)timestamp;
- (void)dealloc;
- (id)init;
- (id)keysToEncode;

@end
