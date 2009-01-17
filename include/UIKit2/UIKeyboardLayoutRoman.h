/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit2/UIKeyboardLayout.h>
#import <UIKit2/CDStructures.h>
#import <UIKit2/UIKeyboardSublayout.h>

@interface UIKeyboardLayoutRoman : UIKeyboardLayout
{
    NSMutableDictionary *m_keyedSublayouts;
    UIKeyboardSublayout *m_activeSublayout;
    UIKeyboardSublayout *m_deactivatingSublayout;
    NSString* m_activeSublayoutKey;
    int m_activeKeyIndex;
    UIView *m_activeKeyView;
    UIView *m_accentedKeyView;
    int m_returnKeyIndex;
    UIView *m_enabledReturnKeyView;
    UIView *m_disabledReturnKeyView;
    UIView *m_pressedReturnKeyView;
    struct CGPoint m_dragPoint;
    unsigned int m_currentPathFlags;
    PathInfo m_activePathInfo;
    int m_shiftKeyPathIndex;
    int m_swipePathIndex;
    int m_preferredTrackingChangeCount;
    struct USet *m_accentInfo;
    struct USet *m_hasAccents;
    id m_spaceTarget;
    SEL m_spaceAction;
    SEL m_spaceLongAction;
    id m_returnTarget;
    SEL m_returnAction;
    SEL m_returnLongAction;
    id m_deleteTarget;
    SEL m_deleteAction;
    SEL m_deleteLongAction;
    BOOL m_shift;
    BOOL m_built;
    BOOL m_dragged;
    BOOL m_dragChangedKey;
    BOOL m_mouseDownInMoreKey;
    BOOL m_didLongPress;
}

+ (id)inputModesPreferringEuroToDollar;
+ (id)availableTopLevelDomains;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)showKeyboardType:(int)fp8 withAppearance:(int)fp12;
- (void)deactivateActiveKeys;
- (void)updateReturnKey;
- (void)updateLocalizedKeys;
- (BOOL)usesAutoShift;
- (BOOL)isShiftKeyBeingHeld;
- (BOOL)isShiftKeyPlaneChooser;
- (void)setShift:(BOOL)fp8;
- (void)longPressAction;
- (BOOL)canHandleHandEvent:(struct __GSEvent *)fp8;
- (unsigned int)typeForKey:(UIKeyDefinition*)fp8;
- (unsigned int)downActionFlagsForKey:(UIKeyDefinition*)fp8;
- (unsigned int)upActionFlagsForKey:(UIKeyDefinition*)fp8;
- (struct CGRect)compositeFGLongPressFrameForKey:(UIKeyDefinition*)fp8 orientation:(int)fp12;
- (Class)sublayoutClassForKeyboardType:(id)fp8;
- (void)setLabel:(NSString*)fp8 forKey:(NSString*)fp12;
- (void)setTarget:(id)fp8 forKey:(NSString*)fp12;
- (void)setAction:(SEL)fp8 forKey:(NSString*)fp12;
- (void)setLongPressAction:(SEL)fp8 forKey:(NSString*)fp12;
- (void)restoreDefaultsForKey:(NSString*)fp8;
- (void)restoreDefaultsForAllKeys;
- (void)nextCandidatesAction;
- (void)confirmAction;
- (void)sendStringAction:(id)fp8 forKey:(UIKeyDefinition*)fp12;
- (void)deleteAction;
- (void)handleHardwareKeyDownFromSimulator:(struct __GSEvent *)fp8;
- (void)addLocalizedCurrencyKeysToSublayout:(id)fp8 keyboardType:(id)fp12;
- (void)build;
- (id)buildSublayoutForKey:(id)fp8;
- (id)buildUIKeyboardLayoutMain;
- (id)buildUIKeyboardLayoutAlternate;
- (id)buildUIKeyboardLayoutAlphabet;
- (id)buildUIKeyboardLayoutNumbers;
- (id)buildUIKeyboardLayoutAlphabetTransparent;
- (id)buildUIKeyboardLayoutNumbersTransparent;
- (id)buildUIKeyboardLayoutPhonePad;
- (id)buildUIKeyboardLayoutPhonePadAlt;
- (id)buildUIKeyboardLayoutPhonePadTransparent;
- (id)buildUIKeyboardLayoutPhonePadAltTransparent;
- (id)buildUIKeyboardLayoutNumberPad;
- (id)buildUIKeyboardLayoutNumberPadTransparent;
- (id)buildUIKeyboardLayoutURL;
- (id)buildUIKeyboardLayoutURLAlt;
- (id)buildUIKeyboardLayoutURLTransparent;
- (id)buildUIKeyboardLayoutURLAltTransparent;
- (id)buildUIKeyboardLayoutSMSAddressing;
- (id)buildUIKeyboardLayoutSMSAddressingAlt;
- (id)buildUIKeyboardLayoutSMSAddressingTransparent;
- (id)buildUIKeyboardLayoutSMSAddressingAltTransparent;
- (id)buildUIKeyboardLayoutEmailAddress;
- (id)buildUIKeyboardLayoutEmailAddressAlt;
- (id)buildUIKeyboardLayoutEmailAddressTransparent;
- (id)buildUIKeyboardLayoutEmailAddressAltTransparent;
- (void)addSublayout:(id)fp8 forKey:(id)fp12;
- (id)layoutKeyForKeyboardType:(int)fp8 withAppearance:(int)fp12;
- (void)showKeyboardTypeForKey:(id)fp8;
- (id)sublayoutForKey:(id)fp8;
- (id)activeSublayoutKey;
- (id)activeSublayout;
- (UIKeyDefinition*)activeKey;
- (id)overlayImageForKey:(UIKeyDefinition*)fp8;
- (BOOL)shouldCacheViewForKey:(UIKeyDefinition*)fp8;
- (void)activateCompositeKey:(UIKeyDefinition*)fp8;
- (void)activateKey:(UIKeyDefinition*)fp8;
- (void)activateKeyWithIndex:(unsigned int)fp8;
- (void)activateFirstKeyOfType:(unsigned int)fp8;
- (unsigned int)keyHitTest:(struct CGPoint)fp8;
- (UIKeyDefinition*)keyForPoint:(struct CGPoint)fp8;
- (void)showPopupVariantsForKey:(UIKeyDefinition*)fp8;
- (void)layoutSubview:(id)fp8 selectedString:(id)fp12;
- (BOOL)isLongPressedKey:(UIKeyDefinition*)fp8;
- (id)inputStringForKey:(UIKeyDefinition*)fp8;
- (id)cacheKeyForKey:(UIKeyDefinition*)fp8;
- (UIKeyDefinition*)inputKeyboardKeyForKey:(UIKeyDefinition*)fp8;
- (id)alternateSublayoutKey:(id)fp8;
- (BOOL)handleHandEvent:(struct __GSEvent *)fp8;
- (void)touchDownWithKey:(UIKeyDefinition*)fp8 atPoint:(struct CGPoint)fp12;
- (int)keyHitTestUniversal:(struct CGPoint)fp8 touchStage:(int)fp16 atTime:(double)fp20 withPathInfo:(PathInfo *)fp28;
- (void)touchDown:(struct __GSEvent *)fp8 withPathInfo:(UIKeyDefinition*)fp12;
- (void)touchDragged:(struct __GSEvent *)fp8 withPathInfo:(UIKeyDefinition*)fp12;
- (void)touchUp:(struct __GSEvent *)fp8 withPathInfo:(UIKeyDefinition*)fp12;
- (BOOL)cancelTouchTracking;
- (BOOL)cancelMouseTracking;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;

@end

