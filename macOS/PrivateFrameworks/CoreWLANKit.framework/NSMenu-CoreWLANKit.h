//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenu.h>

@interface NSMenu (CoreWLANKit)
+ (id)menuItemsWithScanResults:(id)arg1 currentNetworkMenuItems:(id)arg2 currentNetworkGroup:(long long)arg3 baseTag:(long long)arg4 action:(SEL)arg5 target:(id)arg6 modifierFlags:(unsigned long long)arg7 isPopupMenu:(BOOL)arg8 minimumMenuWidth:(long long)arg9 adjustedMinimumMenuWidth:(long long *)arg10;
+ (id)menuItemsForCurrentNetworkWithInterfaceAttributes:(id)arg1 numberOfBarsOverride:(id)arg2 submenu:(id)arg3 baseTag:(long long)arg4 action:(SEL)arg5 disconnect:(SEL)arg6 target:(id)arg7 modifierFlags:(unsigned long long)arg8 isPopupMenu:(BOOL)arg9 minimumMenuWidth:(long long)arg10 adjustedMinimumMenuWidth:(long long *)arg11 currentNetworkScanResult:(id *)arg12;
+ (id)__menuItemForScanResult:(id)arg1 numberOfBars:(unsigned long long)arg2 isCurrentNetwork:(BOOL)arg3 interfaceAttributes:(id)arg4 submenu:(id)arg5 baseTag:(long long)arg6 action:(SEL)arg7 target:(id)arg8 modifierFlags:(unsigned long long)arg9 isPopupMenu:(BOOL)arg10 minimumMenuWidth:(long long)arg11 adjustedMinimumMenuWidth:(long long *)arg12;
+ (id)__menuItemsForCurrentNetworkWithInterfaceAttributes:(id)arg1 baseTag:(long long)arg2;
+ (id)__tooltipForTetherDevice:(id)arg1;
+ (id)__tooltipForNetwork:(id)arg1;
+ (id)__localizedStringForSecurityType:(unsigned long long)arg1;
+ (id)__menuItemGroupWithScanResults:(id)arg1 title:(id)arg2 currentNetworkMenuItems:(id)arg3 baseTag:(long long)arg4 action:(SEL)arg5 target:(id)arg6 modifierFlags:(unsigned long long)arg7 isPopupMenu:(BOOL)arg8 minimumMenuWidth:(long long)arg9 adjustedMinimumMenuWidth:(long long *)arg10;
+ (id)__localizedString:(id)arg1;
+ (id)__scanResultForCurrentNetworkWithInterface:(id)arg1;
+ (id)__imageListForTetherDevice:(id)arg1;
+ (id)__tetherDeviceCellularProtocolImageForTetherDevice:(id)arg1 paddingAfter:(double)arg2;
+ (id)__tetherDeviceCellularSignalImageListForTetherDevice:(id)arg1 paddingAfter:(double)arg2;
+ (id)__tetherDeviceBatteryImageForTetherDevice:(id)arg1 paddingAfter:(double)arg2;
+ (id)menuItemAttributesForInterface:(id)arg1;
- (id)addItemWithTitle:(id)arg1 action:(SEL)arg2 enabled:(BOOL)arg3 tag:(int)arg4 state:(int)arg5;
- (id)addItemWithTitle:(id)arg1 action:(SEL)arg2;
- (id)addItemDisabledWithTitle:(id)arg1;
@end

