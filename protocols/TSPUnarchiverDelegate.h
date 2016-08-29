/* Generated by RuntimeBrowser.
 */

@protocol TSPUnarchiverDelegate <NSObject>

@required

- (NSUUID *)UUIDForObjectIdentifier:(long long)arg1;
- (bool)canRetainObjectReferencedByWeakLazyReference;
- (TSPData *)dataForIdentifier:(long long)arg1;
- (bool)didFinishResolvingReferences;
- (unsigned long long)fileFormatVersion;
- (bool)hasDocumentVersionUUID;
- (long long)objectIdentifierForUUID:(NSUUID *)arg1;
- (long long)sourceType;
- (void)unarchiver:(TSPUnarchiver *)arg1 didReadLazyReference:(TSPLazyReference *)arg2 isExternal:(bool*)arg3;

@optional

- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;

@end