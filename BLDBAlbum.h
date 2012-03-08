/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLDBGenericModel.h"

@class BLDBMedia, NSArray, NSString;

@interface BLDBAlbum : BLDBGenericModel
{
    unsigned int m_type;
    NSString *m_name;
    int m_rating;
    double m_oldestDateCreated;
    double m_youngestDateCreated;
    double m_dateModified;
    NSString *m_posterMediaUuid;
    NSString *m_userPosterMediaUuid;
    int m_itemCount;
    NSString *m_themeUuid;
    NSString *m_journalUuid;
    unsigned int m_state;
    BLDBMedia *m_posterMedia;
    unsigned int m_nextPrimaryKey;
    NSArray *m_initialSortedMediaList;
    BOOL _assetsPairedFlag;
}

+ (id)groupURLStringWithModel:(id)fp8;
+ (id)groupURLStringWithModelUuid:(id)fp8;
+ (BOOL)parseGroupUuidWithURL:(id)fp8 intoModel:(id)fp12;
+ (id)albumKeyIndexSetWithTypeMask:(int)fp8 inModelList:(id)fp12 abortBlock:(id)fp(null);
+ (id)sortModelListByTypeOrDatesOrNames:(id)fp8;
+ (id)modelWithJournalUuid:(id)fp8 inModelList:(id)fp12 abortBlock:(id)fp(null);
+ (id)nonEmptyModelsInModelList:(id)fp8 abortBlock:(id)fp(null);
+ (id)nonEmptyModelsWithType:(int)fp8 inModelList:(id)fp12 abortBlock:(id)fp(null);
+ (void)initialize;
+ (BOOL)isModelKeyListEditable:(id)fp8;
+ (BOOL)isModelKeyListSerializable:(id)fp8;
+ (BOOL)isModelKeyUsedForSort:(id)fp8;
+ (id)tableAttributesWithSchema:(int)fp8;
+ (id)tableNameWithSchema:(int)fp8;
- (void)setInitialSortedMediaList:(id)fp8;
- (id)initialSortedMediaList;
- (void)setNextPrimaryKey:(unsigned int)fp8;
- (unsigned int)nextPrimaryKey;
- (void)setPosterMedia:(id)fp8;
- (id)posterMedia;
- (BOOL)testAndSetAssetsPairedFlag;
- (BOOL)updateStateWithAddedMask:(unsigned int)fp8 removedMask:(unsigned int)fp12 beamed:(BOOL)fp16 ubiquitous:(BOOL)fp20;
- (void)setState:(unsigned int)fp8;
- (void)setJournalUuid:(id)fp8;
- (void)setThemeUuid:(id)fp8;
- (void)setItemCount:(int)fp8;
- (void)setUserPosterMediaUuid:(id)fp8;
- (void)setPosterMediaUuid:(id)fp8;
- (void)setDateModified:(double)fp8;
- (void)setYoungestDateCreated:(double)fp8;
- (void)setOldestDateCreated:(double)fp8;
- (void)setRating:(int)fp8;
- (void)setName:(id)fp8;
- (void)setType:(unsigned int)fp8;
- (BOOL)isLastImport;
- (BOOL)isImportedPhotos;
- (BOOL)isCameraRoll;
- (unsigned int)state;
- (id)journalUuid;
- (id)themeUuid;
- (int)itemCount;
- (id)userPosterMediaUuid;
- (id)posterMediaUuid;
- (double)dateModified;
- (double)youngestDateCreated;
- (double)oldestDateCreated;
- (int)rating;
- (id)name;
- (unsigned int)type;
- (void)mergeWithAssetsLibraryDerivedModel:(id)fp8;
- (void)prepareForReuse;
- (BOOL)areEditablePropertiesSetToInitialValues;
- (void)setEditablePropertiesToInitialValues;
- (id)dictionary;
- (id)reinitWithDictionary:(id)fp8 changedPropertyKeyList:(id)fp12 oldValueList:(id)fp16;
- (id)initWithDictionary:(id)fp8;
- (id)cloneWithModel:(id)fp8 changedPropertyKeyList:(id)fp12 oldValueList:(id)fp16;
- (id)reallyCopyWithZone:(struct _NSZone *)fp8;
- (id)description;
- (void)dealloc;
- (id)init;

@end

