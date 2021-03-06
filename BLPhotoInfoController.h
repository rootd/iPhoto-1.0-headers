/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLInfoViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableSet, UIImageView, UILabel, UITextField, UIView;

@interface BLPhotoInfoController : BLInfoViewController <UITextFieldDelegate>
{
    UIView *m_landscapeView;
    UIView *m_portraitView;
    UILabel *m_date;
    UILabel *m_dimensions;
    UILabel *m_size;
    UILabel *m_location;
    UILabel *m_camera;
    UIView *m_indicators;
    UILabel *m_aperture;
    UILabel *m_shutterSpeed;
    UILabel *m_exposureCompensation;
    UILabel *m_iso;
    UILabel *m_focalLength;
    UITextField *m_caption;
    UILabel *m_date2;
    UILabel *m_dimensions2;
    UILabel *m_location2;
    UILabel *m_camera2;
    UIView *m_indicators2;
    UILabel *m_aperture2;
    UILabel *m_shutterSpeed2;
    UILabel *m_exposureCompensation2;
    UILabel *m_iso2;
    UILabel *m_focalLength2;
    UITextField *m_caption2;
    UIImageView *m_jpegIndicator;
    UIImageView *m_rawIndicator;
    UIImageView *m_pngIndicator;
    UIImageView *m_tiffIndicator;
    UIImageView *m_flashIndicator;
    UIImageView *m_meteringIndicators[7];
    NSMutableSet *m_geocoders;
    struct dispatch_queue_s *m_queue;
}

- (void)setM_caption2:(id)fp8;
- (id)m_caption2;
- (void)setM_exposureCompensation2:(id)fp8;
- (id)m_exposureCompensation2;
- (void)setM_shutterSpeed2:(id)fp8;
- (id)m_shutterSpeed2;
- (void)setM_focalLength2:(id)fp8;
- (id)m_focalLength2;
- (void)setM_indicators2:(id)fp8;
- (id)m_indicators2;
- (void)setM_dimensions2:(id)fp8;
- (id)m_dimensions2;
- (void)setM_location2:(id)fp8;
- (id)m_location2;
- (void)setM_aperture2:(id)fp8;
- (id)m_aperture2;
- (void)setM_camera2:(id)fp8;
- (id)m_camera2;
- (void)setM_date2:(id)fp8;
- (id)m_date2;
- (void)setM_iso2:(id)fp8;
- (id)m_iso2;
- (void)setM_caption:(id)fp8;
- (id)m_caption;
- (void)setM_exposureCompensation:(id)fp8;
- (id)m_exposureCompensation;
- (void)setM_shutterSpeed:(id)fp8;
- (id)m_shutterSpeed;
- (void)setM_focalLength:(id)fp8;
- (id)m_focalLength;
- (void)setM_indicators:(id)fp8;
- (id)m_indicators;
- (void)setM_dimensions:(id)fp8;
- (id)m_dimensions;
- (void)setM_location:(id)fp8;
- (id)m_location;
- (void)setM_aperture:(id)fp8;
- (id)m_aperture;
- (void)setM_camera:(id)fp8;
- (id)m_camera;
- (void)setM_size:(id)fp8;
- (id)m_size;
- (void)setM_date:(id)fp8;
- (id)m_date;
- (void)setM_iso:(id)fp8;
- (id)m_iso;
- (void)setPortraitView:(id)fp8;
- (id)portraitView;
- (void)setLandscapeView:(id)fp8;
- (id)landscapeView;
- (void)enableCaptionEditing:(BOOL)fp8;
- (void)dealloc;
- (void)updateForOrientation:(int)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (void)a_captionSet:(id)fp8;
- (struct CGSize)contentSizeForViewInPopover;
- (void)updateForCurrentSelection;
- (void)updateUI:(id)fp8 count:(int)fp12;
- (void)setUIAlpha:(float)fp8;
- (void)populateIndicators:(id)fp8;
- (BOOL)isLandscape;
- (int)getInt:(id)fp8 forKey:(id)fp12 defaultValue:(int)fp16;
- (void)values:(id)fp8 properties:(id)fp12 floatForKey:(struct __CFString *)fp16 format:(id)fp20 forKey:(id)fp24 multipleString:(id)fp28;
- (void)values:(id)fp8 setDate:(id)fp12 forKey:(id)fp16 textKey:(id)fp20 multipleString:(id)fp24;
- (void)values:(id)fp8 setString:(id)fp12 forKey:(id)fp16 multipleString:(id)fp20;

@end

