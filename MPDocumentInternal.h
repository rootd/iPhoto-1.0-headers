/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class MPLayerGroup, NSLock, NSMutableDictionary, NSRecursiveLock, NSString, NSURL, NSUndoManager;

@interface MPDocumentInternal : _ACAccountTypeIdentifierTwitter
{
    NSString *uuid;
    NSString *lastRandomTransition;
    NSMutableDictionary *orderedRandomTransitions;
    NSRecursiveLock *propertiesLock;
    MPLayerGroup *documentLayerGroup;
    BOOL savesPathsAsAbsolute;
    BOOL assetLogging;
    NSMutableDictionary *cachedAbsolutePaths;
    NSMutableDictionary *cachedAbsoluteStillPaths;
    NSLock *cachedPathLock;
    NSUndoManager *undoManager;
    NSURL *fileURL;
    int batchModifyCount;
    BOOL isInBatchModify;
    BOOL needsActionConfigure;
    NSMutableDictionary *cachedActionableLayers;
    BOOL cacheAbsolutePathOverride;
}

- (void)setCacheAbsolutePathOverride:(BOOL)fp8;
- (BOOL)cacheAbsolutePathOverride;
- (void)setUuid:(id)fp8;
- (id)uuid;
- (void)setFileURL:(id)fp8;
- (id)fileURL;
- (void)setCachedActionableLayers:(id)fp8;
- (id)cachedActionableLayers;
- (void)setIsInBatchModify:(BOOL)fp8;
- (BOOL)isInBatchModify;
- (void)setNeedsActionConfigure:(BOOL)fp8;
- (BOOL)needsActionConfigure;
- (void)setBatchModifyCount:(int)fp8;
- (int)batchModifyCount;
- (void)setUndoManager:(id)fp8;
- (id)undoManager;
- (void)setCachedPathLock:(id)fp8;
- (id)cachedPathLock;
- (void)setCachedAbsoluteStillPaths:(id)fp8;
- (id)cachedAbsoluteStillPaths;
- (void)setCachedAbsolutePaths:(id)fp8;
- (id)cachedAbsolutePaths;
- (void)setAssetLogging:(BOOL)fp8;
- (BOOL)assetLogging;
- (void)setSavesPathsAsAbsolute:(BOOL)fp8;
- (BOOL)savesPathsAsAbsolute;
- (void)setDocumentLayerGroup:(id)fp8;
- (id)documentLayerGroup;
- (void)setPropertiesLock:(id)fp8;
- (id)propertiesLock;
- (void)setOrderedRandomTransitions:(id)fp8;
- (id)orderedRandomTransitions;
- (void)setLastRandomTransition:(id)fp8;
- (id)lastRandomTransition;
- (void)dealloc;

@end

