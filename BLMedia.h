/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLDBMedia.h"

#import "P2PMediaObjectProtocol-Protocol.h"

@class NSArray, NSConditionLock, NSDate;

@interface BLMedia : BLDBMedia <P2PMediaObjectProtocol>
{
    BOOL m_marked;
    NSArray *m_fileTypes;
    NSDate *m_exifCreationDate;
    NSConditionLock *_imageConditionLock;
    BOOL m_bestOf;
}

- (id)imageConditionLock;
- (void)setMarked:(BOOL)fp8;
- (BOOL)marked;
- (id)generateAccessibilityLabel;
- (id)locationIfAllowed;
- (BOOL)hasXMPEditsUsingQuickTest:(BOOL)fp8;
- (BOOL)hasXMPEditsInSidecar;
- (id)EXIFCreationDate;
- (void)clearFlickrTimestampForUserId:(id)fp8;
- (double)flickrTimestampForUserId:(id)fp8;
- (void)setFlickrTimestamp:(double)fp8 forUserId:(id)fp16;
- (void)setFlickrId:(id)fp8 forUserId:(id)fp12;
- (id)flickrIdForUserId:(id)fp8;
- (void)setFlickrMetadata:(id)fp8;
- (id)flickrMetadata;
- (void)clearFacebookTimestampForUserId:(id)fp8;
- (double)facebookTimestampForUserId:(id)fp8;
- (void)setFacebookTimestamp:(double)fp8 forUserId:(id)fp16;
- (id)latestFacebookIdForUserId:(id)fp8;
- (void)removeFacebookIdsForUserId:(id)fp8;
- (void)removeFacebookId:(id)fp8 forUserId:(id)fp12;
- (void)addFacebookId:(id)fp8 forUserId:(id)fp12;
- (id)facebookIdsForUserId:(id)fp8;
- (void)setFacebookMetadata:(id)fp8;
- (id)facebookMetadata;
- (void)beamAdjustmentDataWithCompletionBlock:(id)fp(null);
- (void)beamMetaDataWithCompletionBlock:(id)fp(null);
- (void)beamMediaAndImageDataWithCompletionBlock:(id)fp(null);
- (id)beamUuid;
- (BOOL)saveJPEGImage:(id)fp8 maxDimension:(int)fp12 toPath:(id)fp16 error:(id *)fp20;
- (BOOL)saveImageRef:(struct CGImage *)fp8 toPath:(id)fp12 error:(id *)fp16;
- (BOOL)copyAssetRepresentation:(id)fp8 toPath:(id)fp12 error:(id *)fp16;
- (void)imageAndAdjustmentsWithType:(int)fp8 sync:(BOOL)fp12 completionBlock:(id)fp(null);
- (void)imageWithType:(int)fp8 sync:(BOOL)fp12 completionBlock:(id)fp(null);
- (void)imageWithType:(int)fp8 andAdjustments:(BOOL)fp12 sync:(BOOL)fp16 completionBlock:(id)fp(null);
- (id)imageDataFromAssetWithType:(int)fp8 hasXMPEdits:(char *)fp12 isPlaceholder:(char *)fp16 pathExtension:(id *)fp20;
- (id)imageFromAssetWithType:(int)fp8 hasXMPEdits:(char *)fp12 isPlaceholder:(char *)fp16 pathExtension:(id *)fp20;
- (BOOL)isAddableToAssetsLibraryAlbum;
- (BOOL)wouldHaveLocalSandboxFiles;
- (BOOL)isDeletable:(char *)fp8;
- (BOOL)isInJournal;
- (BOOL)isExternal;
- (BOOL)isImageEdited;
- (BOOL)isImageEditable;
- (BOOL)isEdited;
- (id)fileTypes;
- (id)metadataFromAsset;
- (int)originalImageOrientation;
- (void)setBestOf:(BOOL)fp8;
- (BOOL)bestOf;
- (void)setRejected:(BOOL)fp8;
- (BOOL)rejected;
- (id)location;
- (id)modificationDate;
- (id)creationDate;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)fp8;

@end

