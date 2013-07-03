/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class PBOutlineBulletDictionary, <OCCancelDelegate>, PDPresentation, PDSlideBase, PBOfficeArtReaderState, ESDObject, PBSlideState, TSUNoCopyDictionary, ESDRoot, NSMutableDictionary, ESDContainer, NSMutableArray;

@interface PBPresentationReaderState : NSObject  {
    struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; boolx12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::pair<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::pair<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_node<std::__1::pair<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; int x28; struct ChVector<ChPair<unsigned int, EscherObjectEnums> > { struct ChPair<unsigned int, EscherObjectEnums> {} *x_29_1_1; struct ChPair<unsigned int, EscherObjectEnums> {} *x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; boolx30; } *mPptBinaryReader;
    PDPresentation *mTgtPresentation;
    ESDRoot *mDocumentRoot;
    ESDContainer *mSrcSlideListHolder;
    struct ChVector<int> { int *x1; int *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mCurrentSlideTextBlockStartIndexVector;
    unsigned long mSrcSlideId;
    NSMutableArray *mSlideIndexes;
    TSUNoCopyDictionary *mSlideMasterToMasterStyles;
    struct __CFDictionary { } *mHyperlinkMap;
    PBOfficeArtReaderState *mOfficeArtState;
    NSMutableArray *mFontEntities;
    PDSlideBase *mTgtSlide;
    unsigned int mTextLength;
    BOOL mHasCharacterPropertyBulletIndex;
    unsigned int mBulletIndex;
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;
    ESDObject *mCurrentBulletStyle;
    ESDObject *mCurrentMacCharStyle;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mSrcDocMasterStyleInfoVector;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mSrcCurrentMasterStyleInfoVector;
    PBSlideState *mSlideState;
    <OCCancelDelegate> *mCancel;
    BOOL mHasSlideNumberPlaceholder;
    NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;
}

@property ESDContainer * sourceSlideListHolder;
@property(retain) <OCCancelDelegate> * cancelDelegate;
@property BOOL hasSlideNumberPlaceholder;


- (BOOL)hasSlideNumberPlaceholder;
- (BOOL)hasCurrentSourceMasterStyleInfoVector;
- (void)setMasterStyles:(id)arg1 slideMaster:(id)arg2;
- (id)currentBulletStyle;
- (void)setPlaceholderMacCharStyles:(id)arg1;
- (void)setPlaceholderBulletStyles:(id)arg1;
- (unsigned int)bulletIndex;
- (void)setHasCharacterPropertyBulletIndex:(BOOL)arg1;
- (void)setTgtSlide:(id)arg1;
- (unsigned int)fontEntityCount;
- (id)slideIndexesRef;
- (unsigned int)getSlideIndexAt:(unsigned int)arg1;
- (void)addSlideIndex:(unsigned int)arg1;
- (unsigned int)numberOfSlideIndexes;
- (void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2;
- (void)setSourceSlideId:(unsigned long)arg1;
- (void)setSourceSlideListHolder:(id)arg1;
- (id)masterStyles:(id)arg1;
- (struct PBReaderMasterStyleInfo { struct PptTextMasterStyleAtom {} *x1; struct PptTextMasterStyle9Atom {} *x2; }*)currentSourceMasterStyleInfoOfType:(int)arg1;
- (void)setCurrentSourceMasterStyleInfoVector:(struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (struct PBReaderMasterStyleInfo { struct PptTextMasterStyleAtom {} *x1; struct PptTextMasterStyle9Atom {} *x2; }*)docSourceMasterStyleInfoOfType:(int)arg1;
- (void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;
- (id)initWithReader:(struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; boolx12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::pair<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::pair<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_node<std::__1::pair<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; int x28; struct ChVector<ChPair<unsigned int, EscherObjectEnums> > { struct ChPair<unsigned int, EscherObjectEnums> {} *x_29_1_1; struct ChPair<unsigned int, EscherObjectEnums> {} *x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; boolx30; }*)arg1 tgtPresentation:(id)arg2;
- (void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned long)arg2;
- (id)sourceSlideListHolder;
- (struct ChVector<int> { int *x1; int *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)currentSlideTextBlockStartIndexVector;
- (id)hyperlinkInfoWithId:(unsigned long)arg1 createIfAbsent:(BOOL)arg2;
- (void)setHasSlideNumberPlaceholder:(BOOL)arg1;
- (void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2;
- (id)sourceTextBoxContainerHolderForTargetShape:(id)arg1;
- (void)setTextLength:(unsigned int)arg1;
- (id)fontEntityAtIndex:(unsigned int)arg1;
- (void)setBulletIndex:(unsigned int)arg1;
- (BOOL)hasCharacterPropertyBulletIndex;
- (id)currentMacCharStyle;
- (id)tgtPresentation;
- (id)tgtSlide;
- (id)slideState;
- (void)resetSlideState;
- (void)setCancelDelegate:(id)arg1;
- (struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; boolx12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::pair<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::pair<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_node<std::__1::pair<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; int x28; struct ChVector<ChPair<unsigned int, EscherObjectEnums> > { struct ChPair<unsigned int, EscherObjectEnums> {} *x_29_1_1; struct ChPair<unsigned int, EscherObjectEnums> {} *x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; boolx30; }*)reader;
- (id)cancelDelegate;
- (id)officeArtState;
- (unsigned int)textLength;
- (void)dealloc;
- (BOOL)isCancelled;
- (void)setDocumentRoot:(id)arg1;
- (id)documentRoot;

@end