/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@protocol MPFilterSupport
- (void)moveFiltersFromIndices:(id)fp8 toIndex:(int)fp12;
- (void)removeAllFilters;
- (void)removeFiltersAtIndices:(id)fp8;
- (void)insertFilters:(id)fp8 atIndex:(int)fp12;
- (void)addFilters:(id)fp8;
- (void)addFilter:(id)fp8;
- (id)filters;
@end
