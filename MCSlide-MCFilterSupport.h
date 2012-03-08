/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MCSlide.h"

#import "MCFilterSupport-Protocol.h"

@interface MCSlide (MCFilterSupport) <MCFilterSupport>
- (void)unobserveFilter:(id)fp8;
- (void)observeFilter:(id)fp8;
- (void)moveFiltersAtIndices:(id)fp8 toIndex:(unsigned int)fp12;
- (void)removeAllFilters;
- (void)removeFiltersAtIndices:(id)fp8;
- (id)insertFilterWithFilterID:(id)fp8 atIndex:(unsigned int)fp12;
- (id)addFilterWithFilterID:(id)fp8;
- (id)filterAtIndex:(unsigned int)fp8;
- (unsigned int)countOfFilters;
- (id)filters;
- (id)orderedFilters;
- (id)imprintsForFilters;
- (void)demolishFilters;
- (void)initFiltersWithImprints:(id)fp8;
@end

