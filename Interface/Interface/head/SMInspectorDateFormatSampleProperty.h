//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SMFoundation/SMInspectorProperty.h>

@class NSDate, NSString, NSTextField, SMDelayedInvocation;

__attribute__((visibility("hidden")))
@interface SMInspectorDateFormatSampleProperty : SMInspectorProperty
{
    BOOL _preTenFourFormat;
    NSString *_placeholder;
    NSDate *_date;
    NSTextField *_textField;
    NSTextField *_label;
    SMDelayedInvocation *_updateViewInvocation;
}

@property(retain, nonatomic) SMDelayedInvocation *updateViewInvocation; // @synthesize updateViewInvocation=_updateViewInvocation;
@property(nonatomic) __weak NSTextField *label; // @synthesize label=_label;
@property(nonatomic) __weak NSTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) BOOL preTenFourFormat; // @synthesize preTenFourFormat=_preTenFourFormat;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)updateView;
- (id)viewForBaselineAlignment;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithOwner:(id)arg1;

@end

