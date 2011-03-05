/*
Lingon version 2.1.1, 2008-12-18
Written by Peter Borg, pgw3@mac.com
Find the latest version at http://tuppis.com/lingon

Copyright 2005-2008 Peter Borg

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/

#import <Cocoa/Cocoa.h>


@interface LINSyntaxColouring : NSObject {
	NSTextView *textView;
	NSLayoutManager *layoutManager;
	NSString *completeString;
	NSScanner *scanner;
	
	NSDictionary *commandsColour;
	NSDictionary *stringsColour;
	NSDictionary *attributesColour;
	
	NSCharacterSet *attributesCharacterSet;
}

+ (LINSyntaxColouring *)sharedInstance;

- (void)setUpSyntaxColouring;
- (void)recolourCompleteDocument;

@end
