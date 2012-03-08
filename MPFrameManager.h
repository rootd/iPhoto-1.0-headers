/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class NSMutableDictionary;

@interface MPFrameManager : _ACAccountTypeIdentifierTwitter
{
    NSMutableDictionary *mFrames;
    NSMutableDictionary *mCategories;
}

+ (void)releaseSharedManager;
+ (id)sharedManager;
- (id)attributesForFrameID:(id)fp8 andPresetID:(id)fp12;
- (id)framesForCategoryID:(id)fp8;
- (id)categoryIDsForFrameID:(id)fp8;
- (id)localizedCategoryNameFromCategoryID:(id)fp8;
- (id)localizedFrameNameForFrameID:(id)fp8;
- (id)versionOfFrameID:(id)fp8;
- (id)allCategoryIDs;
- (id)allFrameIDs;
- (void)dealloc;

@end
