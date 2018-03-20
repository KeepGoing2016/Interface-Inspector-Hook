//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSTrackingArea, SMInterfaceTreeNode;

__attribute__((visibility("hidden")))
@interface SMOutlineTableCellView : NSTableCellView
{
    BOOL _selected;
    BOOL _installed;
    BOOL _mouseInside;
    SMInterfaceTreeNode *_treeNode;
    double _preferredWidth;
    NSButton *_button;
    NSTrackingArea *_trackingArea;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (double)preferredWidthWithTreeNode:(id)arg1;
@property(nonatomic) BOOL mouseInside; // @synthesize mouseInside=_mouseInside;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSButton *button; // @synthesize button=_button;
@property(nonatomic, getter=isInstalled) BOOL installed; // @synthesize installed=_installed;
@property(nonatomic) double preferredWidth; // @synthesize preferredWidth=_preferredWidth;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) __weak SMInterfaceTreeNode *treeNode; // @synthesize treeNode=_treeNode;
- (void).cxx_destruct;
- (void)resizeSubviews;
- (void)viewWillDraw;
- (void)layout;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)updateButtonState;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)awakeFromNib;

@end
