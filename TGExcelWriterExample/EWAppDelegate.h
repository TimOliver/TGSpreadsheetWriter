//
//  EWAppDelegate.h
//  ExcelWriter
//
//  Created by Tom Grill on 27.09.12.
//  Copyright (c) 2012 Tom Grill. All rights reserved.
//
/*
Copyright (c) 2012 Thomas Grill

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#import <Cocoa/Cocoa.h>

@interface EWAppDelegate : NSObject <NSApplicationDelegate, NSTableViewDataSource, NSTableViewDelegate>

@property (assign) IBOutlet NSTableView *tableView;
@property (assign) IBOutlet NSTextField *txtInputCSV;

@property (assign) IBOutlet NSWindow *window;

@property (retain) IBOutlet NSMutableArray *content;

@property (assign) BOOL hasTitleRow;

- (IBAction)btnOpenPressed:(id)sender;
-(void) initData;
- (IBAction)btnLoadXLSX:(id)sender;
- (IBAction)btnWriteXLSX:(id)sender;

@end
