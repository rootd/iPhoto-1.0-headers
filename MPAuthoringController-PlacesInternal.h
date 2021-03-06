/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MPAuthoringController.h"

@interface MPAuthoringController (PlacesInternal)
- (id)_placeEffectContainersForPhotos:(id)fp8 options:(id)fp12;
- (void)scaleDurationsInPlacesForDocument:(id)fp8 withOptions:(id)fp12;
- (int)tileSetForMap1:(int)fp8 map2:(int)fp12 needsWater:(BOOL)fp16;
- (int)mapTypeForPoint0:(struct CGPoint)fp8 point1:(struct CGPoint)fp16 point2:(struct CGPoint)fp24 map:(id)fp32 flight:(id)fp36;
- (BOOL)rect:(struct CGRect)fp8 intersectsRects:(id)fp24 index:(int *)fp28;
- (id)createLayersForPlacesForImages:(id)fp8 forDocument:(id)fp12 withOptions:(id)fp16;
- (void)_renameMapsAndPins:(id)fp8 withOptions:(id)fp12;
- (id)_mapsSortedByState:(id)fp8;
- (id)_mapsSortedByCity:(id)fp8 hasCities:(char *)fp12;
- (BOOL)_tryAndCollapseMaps:(id)fp8;
- (void)_gatherLocationInfoForMaps:(id)fp8;
- (id)_createMapsWithImages:(id)fp8 withOptions:(id)fp12;
@end

