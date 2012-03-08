/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "BLDBFilePresenterModel-Protocol.h"
#import "NSCopying-Protocol.h"

@class BLAlbum, BLJournalTheme, NSMutableArray, NSMutableDictionary, NSString;

@interface BLJournal : _ACAccountTypeIdentifierTwitter <NSCopying, BLDBFilePresenterModel>
{
    NSString *m_uuid;
    BLAlbum *m_album;
    NSMutableArray *m_pages;
    NSMutableDictionary *m_settings;
    BLJournalTheme *m_theme;
    BOOL m_needsAutoLayout;
}

+ (struct dispatch_queue_s *)exportQueue;
+ (id)photoUuidsWithDictionary:(id)fp8 albumDict:(id *)fp12;
- (void)setPages:(id)fp8;
- (id)pages;
- (void)setAlbum:(id)fp8;
- (id)album;
- (void)setUuid:(id)fp8;
- (id)uuid;
- (id)slideshowRepresentation:(id)fp8;
- (id)slideshowPhotos;
- (BOOL)needToPersistForSharing:(id)fp8;
- (BOOL)verifyMovieFilesForBasename:(id)fp8 folderContents:(id)fp12;
- (BOOL)verifyPhotoFilesForBasename:(id)fp8 withMaxEdge:(int)fp12 folderContents:(id)fp16;
- (void)persistForSharingWithType:(int)fp8 withDialog:(BOOL)fp12 completionBlock:(id)fp(null);
- (BOOL)persistMedia:(id)fp8 toFolder:(id)fp12 existingJournalURL:(id)fp16 existingFiles:(id)fp20 itemData:(id)fp24;
- (id)baseNameForItem:(id)fp8;
- (id)baseNameForMapElement:(id)fp8 withSizeIndex:(int)fp12;
- (BOOL)persistMovie:(id)fp8 toFolder:(id)fp12 baseName:(id)fp16 existingJournalURL:(id)fp20 existingFiles:(id)fp24 itemData:(id)fp28;
- (id)movieFilenameWithBaseName:(id)fp8 sizeIndex:(int)fp12;
- (id)moviePresetNameForIndex:(int)fp8;
- (id)movieSizeNameForIndex:(int)fp8;
- (int)movieSizeForIndex:(int)fp8;
- (int)numberOfMovieSizes;
- (BOOL)persistStills:(id)fp8 toFolder:(id)fp12 baseName:(id)fp16 existingJournalURL:(id)fp20 existingFiles:(id)fp24 itemData:(id)fp28;
- (id)stillImageFilenameWithBaseName:(id)fp8 sizeIndex:(int)fp12;
- (int)stillSizeForIndex:(int)fp8;
- (int)numberOfStillSizes;
- (void)persistJSONtoFolder:(id)fp8 withType:(int)fp12 andItemData:(id)fp16;
- (id)JSONRepresentationForSharing:(id)fp8;
- (id)journalFolderForType:(int)fp8 createIfNeeded:(BOOL)fp12;
- (id)createExportSandbox;
- (void)persistForSharingToiCloudWithCompletionBlock:(id)fp(null);
- (void)persistForSharingToiCloudWithCompletionBlock:(id)fp(null) showDialog:(void)fp8;
- (void)persistForSharingToiTunesWithCompletionBlock:(id)fp(null);
- (void)setSharedPublicly:(BOOL)fp8;
- (void)setSharedPublicly:(BOOL)fp8 removeDataIfNeeded:(BOOL)fp12;
- (BOOL)sharedPublicly;
- (void)setIncludedOnIndexPage:(BOOL)fp8;
- (BOOL)includedOnIndexPage;
- (BOOL)hasCachedBundle;
- (id)persistPosterMedia;
- (void)performAutoLayout;
- (id)theme;
- (id)valueForSetting:(id)fp8;
- (void)setValue:(id)fp8 forSetting:(id)fp12;
- (void)undoSplitPage:(id)fp8;
- (void)splitPage:(id)fp8 atIndex:(unsigned int)fp12;
- (void)uncombinePages:(id)fp8 atIndexes:(id)fp12;
- (id)combinePagesAtIndexes:(id)fp8;
- (void)insertNewPageAtIndex:(unsigned int)fp8;
- (void)insertPages:(id)fp8 atIndexes:(id)fp12;
- (id)removePageAtIndex:(unsigned int)fp8;
- (id)removePagesAtIndexes:(id)fp8;
- (void)removedPages:(id)fp8;
- (void)addedPages:(id)fp8;
- (id)photos;
- (id)photosForPages:(id)fp8;
- (void)movePageFromIndex:(unsigned int)fp8 toIndex:(unsigned int)fp12;
- (BOOL)updateStateWithAddedMask:(unsigned int)fp8 removedMask:(unsigned int)fp12 beamed:(BOOL)fp16 ubiquitous:(BOOL)fp20;
- (unsigned int)state;
- (id)archivableContent;
- (void)addPage:(id)fp8 afterPage:(id)fp12;
- (void)albumNameChanged;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (id)reinitWithDictionary:(id)fp8 album:(id)fp12;
- (id)initWithDictionary:(id)fp8 album:(id)fp12;
- (id)cloneWithModel:(id)fp8;
- (id)reallyCopyWithZone:(struct _NSZone *)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)addPhotos:(id)fp8 toPage:(int)fp12 pageTitle:(id)fp16;
- (id)initWithPhotos:(id)fp8 theme:(id)fp12;
- (void)validateSettings;
- (void)addPage:(id)fp8;
- (id)init;

@end
