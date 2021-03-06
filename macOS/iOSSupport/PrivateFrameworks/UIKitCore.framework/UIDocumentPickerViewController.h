//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSMutableArray, NSURL;
@protocol NSObject, UIDocumentPickerDelegate, UINSDocumentPickerViewController;

@interface UIDocumentPickerViewController : UIViewController
{
    id <UIDocumentPickerDelegate> _weak_delegate;
    NSMutableArray *_securityScopedURLs;
    id <UINSDocumentPickerViewController> _bridgedDocumentPickerViewController;
    id <NSObject> _presentationTransitionWillBeginNotificationListener;
    id <NSObject> _dismissalTransitionWillBeginNotificationListener;
    BOOL _ignoreApplicationEntitlementForImport;
    BOOL _allowsMultipleSelection;
    BOOL _isContentManaged;
    id <UIDocumentPickerDelegate> _delegate;
    unsigned long long _documentPickerMode;
    NSURL *_directoryURL;
    NSArray *_documentTypes;
    UIViewController *_childViewController;
    NSArray *_uploadURLs;
}

- (void).cxx_destruct;
@property(nonatomic, getter=_isContentManaged, setter=_setIsContentManaged:) BOOL isContentManaged; // @synthesize isContentManaged=_isContentManaged;
@property(copy, nonatomic) NSArray *uploadURLs; // @synthesize uploadURLs=_uploadURLs;
@property(retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(copy, nonatomic) NSArray *documentTypes; // @synthesize documentTypes=_documentTypes;
@property(copy, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) unsigned long long documentPickerMode; // @synthesize documentPickerMode=_documentPickerMode;
@property(nonatomic) __weak id <UIDocumentPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:) BOOL _ignoreApplicationEntitlementForImport; // @synthesize _ignoreApplicationEntitlementForImport;
@property(retain, nonatomic) NSMutableArray *_securityScopedURLs; // @synthesize _securityScopedURLs;
- (void)copyURLsToInbox:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentBridgedDocumentPicker;
- (void)_createBridgedDocumentPicker:(id)arg1;
- (BOOL)_bridgeDocumentPickerToHostIfPossible:(id)arg1;
- (void)dismissalTransitionWillBeginNotification:(id)arg1;
- (void)presentationTransitionWillBeginNotification:(id)arg1;
- (void)_consumeSandboxExtensionForURL:(id)arg1;
- (void)_didTapCancel;
- (void)_callDelegateWithSelectedURLsAndDismiss:(id)arg1;
- (void)_tellDelegateDocumentPickerWasCancelled;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (long long)modalPresentationStyle;
@property(nonatomic, getter=_forPickingDownloadsFolder, setter=_setForPickingDownloadsFolder:) BOOL forPickingDownloadsFolder;
@property(nonatomic, getter=_sourceIsManaged, setter=_setSourceIsManaged:) BOOL sourceIsManaged; // @dynamic sourceIsManaged;
- (void)_commonInitWithDocumentTypes:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_initWithViewController:(id)arg1 inMode:(unsigned long long)arg2 uploadURLOrNil:(id)arg3;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1;
@property(nonatomic) unsigned long long pickerUserInterfaceStyle;
@property(nonatomic) BOOL shouldShowFileExtensions;
- (id)initWithURLs:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;

@end

