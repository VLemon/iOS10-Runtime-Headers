/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NoteObject, NSString, NSData;

@interface NoteBodyObject : NSManagedObject  {
}

@property(retain) NSString * content;
@property(readonly) NSString * contentAsPlainText;
@property(retain) NoteObject * owner;
@property(retain) NSData * externalRepresentation;
@property(retain) NSString * externalContentRef;


- (id)contentAsPlainTextPreservingNewlines;
- (id)contentAsPlainText;
- (BOOL)containsAttachments;

@end