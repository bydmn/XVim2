//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAlertsPrefsBehaviorTableCellView.h>

@class IDEKeyBindingField, NSTableView;

@interface IDEAlertsPrefsCustomBehaviorTableCellView : IDEAlertsPrefsBehaviorTableCellView
{
    IDEKeyBindingField *_keyBindingField;
    NSTableView *_tableView;
}

@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IDEKeyBindingField *keyBindingField; // @synthesize keyBindingField=_keyBindingField;
- (void).cxx_destruct;
- (void)beginEditingFromEvent:(id)arg1 inTableView:(id)arg2 column:(long long)arg3 row:(long long)arg4;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)keyBindingFieldCellWillRemoveKeyboardShortcut:(id)arg1;
- (void)keyBindingFieldCellDidAddKeyboardShortcut:(id)arg1;
- (id)keyBindingFieldCell:(id)arg1 validatedKeyboardShortcut:(id)arg2;
- (BOOL)keyBindingFieldCellAllowsMultipleKeyboardShortcut:(id)arg1;
- (id)keyBindingString;
- (id)keyBindingStringForKeyboardShortCut:(id)arg1;
- (id)keyboardShortcut;
- (id)customAlertEvent;
- (void)setTitleFromEdit:(id)arg1;
- (void)setAlertEvent:(id)arg1;
- (void)tile;
- (void)tileWithString:(id)arg1 editing:(BOOL)arg2;
- (struct CGRect)titleRect;
- (struct CGRect)keyboardShortcutRect;
- (struct CGRect)keyboardShortcutRectForString:(id)arg1 editing:(BOOL)arg2;

@end
