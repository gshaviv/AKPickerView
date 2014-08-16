//
//  AKPickerView.h
//  AKPickerViewSample
//
//  Created by Akio Yasui on 3/29/14.
//  Copyright (c) 2014 Akio Yasui. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AKPickerView;

@protocol AKPickerViewDelegate <NSObject>
@required
- (NSUInteger)numberOfItemsInPickerView:(AKPickerView *)pickerView;
- (NSString *)pickerView:(AKPickerView *)pickerView titleForItem:(NSInteger)item;
@optional
- (void)pickerView:(AKPickerView *)pickerView didSelectItem:(NSInteger)item;
@end

@interface AKPickerView : UIView

@property (nonatomic, weak) IBOutlet id <AKPickerViewDelegate> delegate;
@property (nonatomic, strong) IBInspectable UIFont *font;
@property (nonatomic, strong) IBInspectable UIColor *textColor;
@property (nonatomic, strong) IBInspectable UIColor *highlightedTextColor;
@property (nonatomic, assign) IBInspectable CGFloat interitemSpacing;
@property (nonatomic, assign, readonly) NSUInteger selectedItem;

- (void)reloadData;
- (void)scrollToItem:(NSUInteger)item animated:(BOOL)animated;
- (void)selectItem:(NSUInteger)item animated:(BOOL)animated;

@end
