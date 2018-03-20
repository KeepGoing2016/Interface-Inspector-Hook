//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SMFoundation/SMViewController.h>

#import "NSMenuDelegate-Protocol.h"

@class NSButton, NSPathControl, NSString, NSTextField, SMInterface, SMInterfaceTreeNode;
@protocol SMComponentPathControllerDelegate;

__attribute__((visibility("hidden")))
@interface SMComponentPathController : SMViewController <NSMenuDelegate>
{
    BOOL _selectionMode;
    BOOL _enabled;
    SMInterface *_interface;
    id <SMComponentPathControllerDelegate> _delegate;
    SMInterfaceTreeNode *_selectedTreeNode;
    NSPathControl *_pathControl;
    NSTextField *_placeholderLabel;
    NSButton *_selectComponentButton;
}

@property(nonatomic) __weak NSButton *selectComponentButton; // @synthesize selectComponentButton=_selectComponentButton;
@property(nonatomic) __weak NSTextField *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(nonatomic) __weak NSPathControl *pathControl; // @synthesize pathControl=_pathControl;
@property(retain, nonatomic) SMInterfaceTreeNode *selectedTreeNode; // @synthesize selectedTreeNode=_selectedTreeNode;
@property(nonatomic) __weak id <SMComponentPathControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL selectionMode; // @synthesize selectionMode=_selectionMode;
@property(retain, nonatomic) SMInterface *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;
- (void)menuWillOpen:(id)arg1;
- (void)selectComponent:(id)arg1;
- (void)selectMenuComponent:(id)arg1;
- (void)selectPathComponent:(id)arg1;
- (void)updatedSelectedTreeNode;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
