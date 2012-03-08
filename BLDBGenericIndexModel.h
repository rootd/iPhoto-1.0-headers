/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLDBGenericModel.h"

@interface BLDBGenericIndexModel : BLDBGenericModel
{
    unsigned int m_index;
}

+ (unsigned int)insertionIndexForUuid:(id)fp8 inIndexModelList:(id)fp12;
+ (unsigned int)insertionIndexForPrimaryKey:(unsigned int)fp8 inIndexModelList:(id)fp12;
- (void)setIndex:(unsigned int)fp8;
- (unsigned int)index;
- (id)initWithUuid:(id)fp8 index:(unsigned int)fp12;
- (id)initWithPrimaryKey:(unsigned int)fp8 index:(unsigned int)fp12;
- (id)description;

@end
