/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLDBAlbum.h"

@class BLJournal, NSMutableArray;

@interface BLAlbum : BLDBAlbum
{
    BLJournal *m_journal;
    NSMutableArray *m_itemsToSelect;
}

- (void)setItemsToSelect:(id)fp8;
- (id)itemsToSelect;
- (void)setJournal:(id)fp8;
- (id)journal;
- (BOOL)startWithLastPhoto;
- (void)didUpdateJournal;
- (void)setPhoto:(id)fp8 included:(BOOL)fp12;
- (void)setPhotoList:(id)fp8 included:(BOOL)fp12;
- (id)duplicatePhotos:(id)fp8;
- (BOOL)includesPhoto:(id)fp8;
- (void)setName:(id)fp8;
- (id)reinitWithDictionary:(id)fp8 changedPropertyKeyList:(id)fp12 oldValueList:(id)fp16;
- (id)initWithDictionary:(id)fp8;
- (id)cloneWithModel:(id)fp8 changedPropertyKeyList:(id)fp12 oldValueList:(id)fp16;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)dealloc;

@end
