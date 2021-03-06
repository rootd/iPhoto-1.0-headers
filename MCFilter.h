/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MCObject.h"

@class MCSlide, NSMutableDictionary, NSMutableSet, NSString;

@interface MCFilter : MCObject
{
    NSString *mFilterID;
    NSMutableDictionary *mAttributes;
    unsigned int mIndex;
    NSMutableSet *mAnimationPaths;
    MCSlide *mSlideIfSlideFilter;
}

- (void)setFilterID:(id)fp8;
- (id)filterID;
- (void)setIndex:(unsigned int)fp8;
- (unsigned int)index;
- (void)_copySelfToSnapshot:(id)fp8;
- (void)setAttributes:(id)fp8;
- (id)attributes;
- (void)setAttribute:(id)fp8 forKey:(id)fp12;
- (id)attributeForKey:(id)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)fp8 andMontage:(id)fp12;

@end

