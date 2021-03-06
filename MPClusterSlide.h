/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface MPClusterSlide : _ACAccountTypeIdentifierTwitter <NSCopying>
{
    NSDate *mCaptureDate;
    NSString *mPath;
    int mReferenceCounter;
    NSMutableDictionary *mUsageCounterPerLayer;
    NSMutableArray *mUsableSlideClusters;
    int mIndex;
}

- (void)setUsableSlideClusters:(id)fp8;
- (id)usableSlideClusters;
- (void)setUsageCounterPerLayer:(id)fp8;
- (id)usageCounterPerLayer;
- (void)setIndex:(int)fp8;
- (int)index;
- (void)setReferenceCounter:(int)fp8;
- (int)referenceCounter;
- (void)setCaptureDate:(id)fp8;
- (id)captureDate;
- (void)setPath:(id)fp8;
- (id)path;
- (id)description;
- (id)usageCountDescription;
- (void)resetAllUsageCounters;
- (int)overallUsageCounter;
- (void)setUsageCounterForLayer:(id)fp8 to:(int)fp12;
- (int)usageCounterForLayer:(id)fp8;
- (void)increaseUsageCounterForLayer:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)dealloc;
- (id)init;

@end

