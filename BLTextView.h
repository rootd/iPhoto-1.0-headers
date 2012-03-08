/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextInput-Protocol.h"
#import "UITextInputTraits-Protocol.h"

@class BLTextContainer, BLTextSelectionView, NSDictionary, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSTimer, UIColor, UILongPressGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UITextChecker, UIView;

@interface BLTextView : _ACAccountTypeIdentifierTwitter <UIGestureRecognizerDelegate, UIScrollViewDelegate, UITextInput, UITextInputTraits>
{
    BOOL m_setFrameUpdatesLayout;
    NSMutableAttributedString *m_attributedString;
    NSMutableAttributedString *m_attributedPlaceholderString;
    int m_writingDirection;
    BLTextContainer *m_textContainerView;
    UIView *m_caretView;
    NSTimer *m_caretTimer;
    BLTextSelectionView *m_textSelectionView;
    int m_dragType;
    int m_lastSingleTapIndex;
    float m_drawingScaleFactor;
    UIColor *m_textShadowColor;
    struct CGSize m_textShadowOffset;
    UIColor *m_backgroundColorForMagnifier;
    id <BLTextViewDelegate> m_textDelegate;
    struct __CTFrame *m_CTFrame;
    NSMutableDictionary *m_CTDefaultTextAttributes;
    NSMutableDictionary *m_CTDefaultPlaceholderTextAttributes;
    NSMutableDictionary *m_CTTextInputTraits;
    NSDictionary *m_CTMarkedTextStyle;
    struct _NSRange m_CTSelectedTextRange;
    struct _NSRange m_CTMarkedTextRange;
    id <UITextInputDelegate> m_CTTextInputDelegate;
    id <UITextInputTokenizer> m_CTTextInputTokenizer;
    unsigned char m_CTTextAlignment;
    float m_CTMaxLineHeight;
    float m_CTMinLinHeight;
    NSMutableArray *m_spellCheckSuggestions;
    NSMutableArray *m_spellCheckSuggestionMenuItems;
    UITextChecker *m_textChecker;
    BOOL m_performingSpellCheck;
    int m_resizeType;
    float m_minHeight;
    float m_maxHeight;
    BOOL m_multiline;
    int m_verticalAlignment;
    BOOL m_automaticallyBecomesFirstResponder;
    UISwipeGestureRecognizer *m_leftSwipeRecognizer;
    UISwipeGestureRecognizer *m_rightSwipeRecognizer;
    UITapGestureRecognizer *m_tapGestureRecognizer;
    UITapGestureRecognizer *m_doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *m_longPressRecognizer;
}

+ (struct CGSize)preferredSizeForString:(id)fp8 andFont:(struct __CTFont *)fp12 constrainedToSize:(struct CGSize)fp16;
- (void)setSecureTextEntry:(BOOL)fp8;
- (BOOL)isSecureTextEntry;
- (void)setReturnKeyType:(int)fp8;
- (int)returnKeyType;
- (void)setEnablesReturnKeyAutomatically:(BOOL)fp8;
- (BOOL)enablesReturnKeyAutomatically;
- (void)setKeyboardType:(int)fp8;
- (int)keyboardType;
- (void)setKeyboardAppearance:(int)fp8;
- (int)keyboardAppearance;
- (void)setAutocorrectionType:(int)fp8;
- (int)autocorrectionType;
- (void)setAutocapitalizationType:(int)fp8;
- (int)autocapitalizationType;
- (void)spellingReplaceNone:(id)fp8;
- (void)spellingReplace3:(id)fp8;
- (void)spellingReplace2:(id)fp8;
- (void)spellingReplace1:(id)fp8;
- (BOOL)performSpellCheckForRange:(struct _NSRange)fp8;
- (void)addSpellingErrorAttributesForRange:(struct _NSRange)fp8;
- (void)removeSpellingErrorAttributesForRange:(struct _NSRange)fp8;
- (void)updateSpellCheckSuggestionsWithRange:(struct _NSRange)fp8;
- (BOOL)performingSpellCheck;
- (id)preferredInputLanguage;
- (void)paste:(id)fp8;
- (void)cut:(id)fp8;
- (void)copy:(id)fp8;
- (void)selectAll:(id)fp8;
- (void)select:(id)fp8;
- (BOOL)canPerformAction:(SEL)fp8 withSender:(id)fp12;
- (void)hideSelectionMenuIfNeeded;
- (void)showSelectionMenu;
- (id)textStylingAtPosition:(id)fp8 inDirection:(int)fp12;
- (id)characterRangeAtPoint:(struct CGPoint)fp8;
- (id)closestPositionToPoint:(struct CGPoint)fp8 withinRange:(id)fp16;
- (id)closestPositionToPoint:(struct CGPoint)fp8;
- (struct CGRect)caretRectForPosition:(id)fp8;
- (struct CGRect)firstRectForRange:(id)fp8;
- (struct CGRect)firstRectForNSRange:(struct _NSRange)fp8;
- (void)setBaseWritingDirection:(int)fp8 forRange:(id)fp12;
- (int)baseWritingDirectionForPosition:(id)fp8 inDirection:(int)fp12;
- (id)characterRangeByExtendingPosition:(id)fp8 inDirection:(int)fp12;
- (id)positionWithinRange:(id)fp8 farthestInDirection:(int)fp12;
- (int)closestIndexToPoint:(struct CGPoint)fp8;
- (struct CGRect)caretRectForIndex:(int)fp8;
- (int)offsetFromPosition:(id)fp8 toPosition:(id)fp12;
- (int)comparePosition:(id)fp8 toPosition:(id)fp12;
- (id)positionFromPosition:(id)fp8 inDirection:(int)fp12 offset:(int)fp16;
- (id)positionFromPosition:(id)fp8 offset:(int)fp12;
- (id)textRangeFromPosition:(id)fp8 toPosition:(id)fp12;
- (void)unmarkText;
- (void)setMarkedText:(id)fp8 selectedRange:(struct _NSRange)fp12;
- (void)replaceRange:(id)fp8 withText:(id)fp12;
- (id)textInRange:(id)fp8;
- (void)setSelectedTextRange:(id)fp8;
- (id)selectedTextRange;
- (id)markedTextRange;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (void)deleteBackward;
- (void)insertText:(id)fp8;
- (BOOL)hasText;
- (id)tokenizer;
- (id)markedTextStyle;
- (void)setMarkedTextStyle:(id)fp8;
- (id)inputDelegate;
- (void)setInputDelegate:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)scrollViewDidEndDragging:(id)fp8 willDecelerate:(BOOL)fp12;
- (void)scrollViewWillBeginDragging:(id)fp8;
- (float)textHeight;
- (float)verticalAlignmentOffset;
- (struct __CTFont *)defaultFont;
- (struct CGColor *)defaultPlaceholderTextColor;
- (struct CGColor *)defaultTextColor;
- (void)updateLayout;
- (BOOL)canInsertText:(id)fp8;
- (void)rebuildParagraphStyle;
- (BOOL)usesPlaceholderText;
- (id)magnifierBackgroundColor;
- (void)updateSelectionView;
- (void)updateCaret:(int)fp8;
- (void)caretTimer:(id)fp8;
- (void)notifyOfTextChange;
- (void)reallySetDelegate:(id)fp8;
- (struct __CTFrame *)ctFrame;
- (void)setDelegate:(id)fp8;
- (id)attributedString;
- (void)swipe:(id)fp8;
- (void)press:(id)fp8;
- (void)tap:(id)fp8;
- (struct CGSize)boundingSizeForTextWithConstraints:(struct CGSize)fp8 fits:(char *)fp16;
- (int)resizeType;
- (struct CGRect)visibleTextContentFrame;
- (struct CGRect)focusRect;
- (int)dragType;
- (float)minHeight;
- (void)setMinHeight:(float)fp8;
- (float)maxHeight;
- (void)setMaxHeight:(float)fp8;
- (BOOL)isMultline;
- (void)setIsMultiline:(BOOL)fp8;
- (struct CGColor *)placeholderTextColor;
- (void)setPlaceholderTextColor:(struct CGColor *)fp8;
- (BOOL)isUsingPlaceholderText;
- (id)placeholderText;
- (void)setPlaceholderText:(id)fp8;
- (id)string;
- (void)setString:(id)fp8;
- (int)verticalAlignment;
- (void)setVerticalAlignment:(int)fp8;
- (float)lineHeight;
- (void)setLineHeight:(float)fp8;
- (struct CGSize)textShadowOffset;
- (void)setTextShadowOffset:(struct CGSize)fp8;
- (id)textShadowColor;
- (void)setTextShadowColor:(id)fp8;
- (unsigned char)textAlignment;
- (void)setTextAlignment:(unsigned char)fp8;
- (struct CGColor *)textColor;
- (void)setTextColor:(struct CGColor *)fp8;
- (struct __CTFont *)font;
- (void)setFont:(struct __CTFont *)fp8;
- (id)textDelegate;
- (void)setTextDelegate:(id)fp8;
- (float)borderWidth;
- (void)setBorderWidth:(float)fp8;
- (struct CGColor *)borderColor;
- (void)setBorderColor:(struct CGColor *)fp8;
- (id)selectionEndCapColor;
- (void)setSelectionEndCapColor:(id)fp8;
- (id)selectionColor;
- (void)setSelectionColor:(id)fp8;
- (id)caretColor;
- (void)setCaretColor:(id)fp8;
- (float)drawingScaleFactor;
- (void)setDrawingScaleFactor:(float)fp8;
- (void)applyScale:(float)fp8 toString:(id)fp12;
- (BOOL)automaticallyBecomedFirstResponder;
- (void)setAutomaticallyBecomesFirstResponder:(BOOL)fp8;
- (BOOL)isEditing;
- (void)endEditing;
- (void)startEditing;
- (void)setBounds:(struct CGRect)fp8;
- (void)setCenter:(struct CGPoint)fp8;
- (void)setTransform:(struct CGAffineTransform)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)didAddSubview:(id)fp8;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)fp8;
- (BOOL)pointInside:(struct CGPoint)fp8 withEvent:(id)fp16;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)contentDictionary;
- (void)applyContentDictionary:(id)fp8;
- (struct CGColor *)colorFromDictionary:(id)fp8;
- (id)dictionaryFromColor:(struct CGColor *)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 string:(id)fp24 attributes:(id)fp28 andResizeType:(int)fp32;

@end
