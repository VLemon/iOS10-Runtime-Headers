/* Generated by RuntimeBrowser.
 */

@protocol MTLFunction <NSObject>

@required

- (<MTLDevice> *)device;
- (NSDictionary *)functionConstantsDictionary;
- (unsigned long long)functionType;
- (NSString *)label;
- (NSString *)name;
- (long long)patchControlPointCount;
- (unsigned long long)patchType;
- (void)setLabel:(NSString *)arg1;
- (NSArray *)stageInputAttributes;
- (NSArray *)vertexAttributes;

@end