/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MREffect.h"

#import "MZEffectTiming-Protocol.h"

@class MRCroppingSprite, MRImage, MRImageProvider, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MREffectDateline : MREffect <MZEffectTiming>
{
    NSMutableDictionary *mSprites;
    NSDictionary *mJournal;
    NSMutableArray *mWidths;
    NSMutableArray *mChapterDurations;
    NSMutableArray *mChapters;
    NSMutableDictionary *mText;
    NSMutableDictionary *mChapterDates;
    NSMutableDictionary *mChapterNumDate;
    NSMutableArray *mIndicies;
    NSMutableDictionary *mWeatherImages;
    NSMutableDictionary *mDayImages;
    BOOL mIsLoaded;
    MRImageProvider *mTextBackground;
    MRImageProvider *mQuoteOpen;
    MRImageProvider *mQuoteClose;
    MRImageProvider *mQuoteBox;
    MRImageProvider *mWeatherWindowMask;
    MRImageProvider *mDateWindowMask;
    MRImage *mGrayImage;
    MRCroppingSprite *mChapterSprite;
}

+ (id)customTimingWithEffectID:(id)fp8 effectAttributes:(id)fp12 slideInformation:(id)fp16 andTextInformation:(id)fp20;
+ (BOOL)hasCustomTiming;
+ (void)initialize;
- (void)_loadDateForChapter:(int)fp8 context:(id)fp12;
- (void)_loadTextForChapter:(int)fp8 context:(id)fp12;
- (void)_unloadTextForChapter:(int)fp8;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(float)fp8 withDuration:(double)fp12;
- (void)_addTextImage:(id)fp8 forKey:(id)fp12 inDictionary:(id)fp16;
- (id)_textImageForString:(id)fp8 string2:(id)fp12 type:(int)fp16 inContext:(id)fp20 firstLine:(struct CGRect *)fp24 lastLine:(struct CGRect *)fp28;
- (id)_textImageForString:(id)fp8 type:(int)fp12 inContext:(id)fp16;
- (void)_cleanUpDictionary:(id)fp8;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])fp8 withMatrix:(float [16])fp12 forElement:(id)fp16;
- (id)elementHitAtPoint:(struct CGPoint)fp8 withInverseMatrix:(float [16])fp16 localPoint:(struct CGPoint *)fp20;
- (void)_drawChapterDateSwitch:(int)fp8 to:(int)fp12 progress:(float)fp16 time:(double)fp20 arguments:(id)fp28 context:(id)fp32;
- (void)_drawGrayChapters:(id)fp8 time:(double)fp12 arguments:(id)fp20 showInfo:(BOOL)fp24 startProgress:(float)fp28 titleEnd:(float)fp32 titleToChapter:(float)fp36 drawPhotos:(BOOL)fp40 startIndex:(int)fp44 exit:(float)fp48 isExiting:(BOOL)fp52 chapterIntro:(float)fp56 chapterProgress:(float)fp60;
- (void)renderAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (float)_startTimeForChapter:(int)fp8;
- (int)_chapterIndexForTime:(double)fp8;
- (float)_offsetForChapterIndex:(int)fp8 layoutIndex:(int)fp12 aspectRatio:(float)fp16;
- (id)_weatherStringForCondition:(int)fp8;
- (BOOL)prerenderForTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)_calculateDurations:(id)fp8;
- (struct _NSRange)_chapterRangeForSlide:(int)fp8 startIndex:(int *)fp12 endIndex:(int *)fp16;
- (void)_updateSlideProviders:(float)fp8;
- (BOOL)isLoadedForTime:(double)fp8;
- (double)displayTimeForTextAtIndex:(unsigned int)fp8;
- (double)displayTimeForSlideAtIndex:(unsigned int)fp8;
- (double)lowestDisplayTime;
- (double)showDurationForSlideAtIndex:(unsigned int)fp8;
- (double)showTimeForSlideAtIndex:(unsigned int)fp8;
- (double)_calculateMainDurationWithAttributes:(id)fp8;
- (void)_updateIndiciesWithAttributes:(id)fp8;
- (void)setPixelSize:(struct CGSize)fp8;
- (void)_cleanup;
- (id)initWithEffectID:(id)fp8;

@end

