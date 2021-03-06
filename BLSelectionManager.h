/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLAlbum, BLMedia, NSArray, NSDictionary, NSMutableArray, NSMutableSet;

@interface BLSelectionManager : _ACAccountTypeIdentifierTwitter
{
    NSMutableArray *m_selectedPhotos;
    BLMedia *m_primarySelection;
    BLAlbum *m_album;
    int m_changeCount;
    int m_suspendCount;
    NSArray *m_previousSelection;
    NSMutableSet *m_selectionGroup;
    double m_primaryChangeTime;
    NSDictionary *m_lastSelectionDict;
}

+ (id)selectionManager;
- (void)setSelectedPhotos:(id)fp8;
- (id)selectedPhotos;
- (void)setLastSelectionDict:(id)fp8;
- (id)lastSelectionDict;
- (id)primarySelection;
- (void)setAlbum:(id)fp8;
- (id)album;
- (void)dealloc;
- (void)resumeSelectionChanges;
- (void)suspendSelectionChanges;
- (int)selectionStateForPhoto:(id)fp8;
- (id)selectionGroup;
- (BOOL)restoreSelectionForAlbum:(id)fp8 currentMediaList:(id)fp12;
- (id)savedSelectionInfoForAlbum:(id)fp8;
- (void)saveSelectionInfoForAlbum:(id)fp8;
- (void)saveSelectionInfo:(id)fp8 forAlbum:(id)fp12;
- (void)flushPendingSelectionSave;
- (void)saveSelectionDict:(id)fp8;
- (BOOL)setSelectionFromInfo:(id)fp8 currentMediaList:(id)fp12;
- (id)selectionInfo;
- (void)deselectAll;
- (void)deselectPhotos:(id)fp8;
- (void)selectPhotos:(id)fp8;
- (void)selectPhotos:(id)fp8 addToSelection:(BOOL)fp12;
- (void)deselectPhoto:(id)fp8;
- (void)selectPhoto:(id)fp8;
- (void)selectPhoto:(id)fp8 addToSelection:(BOOL)fp12;
- (id)selectedPhotosOrPrimarySelection;
- (void)ignorePrimarySelectionsUntil:(double)fp8;
- (void)setPrimarySelection:(id)fp8;
- (void)didChangeSelection;
- (void)willChangeSelection;

@end

