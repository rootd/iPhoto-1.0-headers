/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class NSArray, NSIndexSet;

@interface MRShiftingTilesTimingInfo : _ACAccountTypeIdentifierTwitter
{
    BOOL fallLeft;
    int fallDirection;
    BOOL isTop;
    NSArray *layouts;
    int add;
    NSIndexSet *remove;
    int slideIndex;
}

- (void)setRemove:(id)fp8;
- (id)remove;
- (void)setLayouts:(id)fp8;
- (id)layouts;
- (id)description;
- (void)dealloc;

@end

