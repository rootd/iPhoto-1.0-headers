/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class MPCluster, MPDocument, NSDate, NSMutableDictionary;

@interface MPClusterController : _ACAccountTypeIdentifierTwitter
{
    NSMutableDictionary *mSlides;
    NSMutableDictionary *mSlideClusters;
    MPCluster *mAllSlidesCluster;
    float mMinimumRequiredClusterRating;
    MPDocument *mAuthoredDocument;
    NSDate *mOldestSlideTimestamp;
    NSDate *mNewestSlideTimestamp;
}

+ (void)releaseSharedController;
+ (id)sharedController;
- (void)dumpSlidesStatistics;
- (void)dumpClustersStatistics;
- (void)updateRatingsForLocationClusters;
- (void)updateRatingsForKeywordClusters;
- (void)updateRatingsForMinuteOfYearClusters;
- (void)updateRatingsForHourOfYearClusters;
- (void)updateRatingsForDayOfYearClusters;
- (void)updateRatingsForMonthOfYearClusters;
- (void)updateRatingsForMonthClusters;
- (void)updateRatingsForYearClusters;
- (void)updateClusterRatings;
- (id)prioritizedSlideClustersDictionary;
- (id)orderedAndPrioritizedSlideClusters;
- (void)createLocationClustersForPaths:(id)fp8;
- (void)addPaths:(id)fp8 toUserDefinedCluster:(id)fp12;
- (id)minuteOfYearClusterForAssetAtPath:(id)fp8;
- (id)hourOfYearClusterForAssetAtPath:(id)fp8;
- (id)dayOfYearClusterForAssetAtPath:(id)fp8;
- (id)monthOfYearClusterForAssetAtPath:(id)fp8;
- (id)monthClusterForAssetAtPath:(id)fp8;
- (id)yearClusterForAssetAtPath:(id)fp8;
- (id)userProvidedClusters;
- (id)locationClusters;
- (id)keywordClusters;
- (id)minuteOfYearClusters;
- (id)hourOfYearClusters;
- (id)dayOfYearClusters;
- (id)monthOfYearClusters;
- (id)monthClusters;
- (id)yearClusters;
- (void)updateAllSlidesClusterWithSlide:(id)fp8;
- (void)removeAllSingleSlideClusters;
- (id)findBestClusterBasedOnUserDefinedSlideOrder:(id)fp8 startingWithSlide:(id)fp12;
- (id)findBestChronologicalCluster:(id)fp8 startingWithSlide:(id)fp12;
- (id)findBestCluster:(id)fp8;
- (void)flushClusters;
- (void)resetAllUsageCounters;
- (id)clustersBasedOnOrderedPaths:(id)fp8;
- (void)sortClusterSlidesChronologically:(id *)fp8;
- (id)clusterSlidesSortedByUserDefinedSortOrder:(id)fp8 userDefinedSlideOrder:(id)fp12;
- (id)clusterSlidesSortedChronologically:(id)fp8;
- (id)allSlidesSortedChronologically;
- (id)nextLeastUsedSlides:(int)fp8 forLayer:(id)fp12 markAsUsed:(BOOL)fp16;
- (id)allSlidesSortedByUsage;
- (id)slideForPath:(id)fp8;
- (id)allSlides;
- (void)addKeywords:(id)fp8 forSlide:(id)fp12;
- (int)addSlideForPath:(id)fp8 withIndex:(int)fp12;
- (void)setAuthoredDocument:(id)fp8;
- (void)flush;
- (void)dealloc;
- (id)init;

@end
