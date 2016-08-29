/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUIPhotosAlbumViewController : PUPhotosAlbumViewController {
    int  __albumFilter;
    PUUIImagePickerControllerHelper * __imagePickerControllerHelper;
    NSArray * __imagePickerMediaTypes;
    UIBarButtonItem * _imagePickerCancelButton;
    UIBarButtonItem * _imagePickerMultipleSelectionDoneButton;
}

@property (setter=_setAlbumFilter:, nonatomic) int _albumFilter;
@property (readonly) PUUIImagePickerControllerHelper *_imagePickerControllerHelper;
@property (setter=_setImagePickerMediaTypes:, nonatomic, copy) NSArray *_imagePickerMediaTypes;

- (void).cxx_destruct;
- (int)_albumFilter;
- (void)_handleImagePickerCancel:(id)arg1;
- (void)_handleImagePickerMultipleSelectionDone:(id)arg1;
- (id)_imagePickerControllerHelper;
- (id)_imagePickerMediaTypes;
- (void)_setAlbumFilter:(int)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (bool)allowsPeeking;
- (bool)canBeginStackCollapseTransition;
- (bool)canNavigateToPhotoInteractively:(bool)arg1;
- (id)filterPredicateForAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (id)init;
- (id)initWithSpec:(id)arg1;
- (void)loadView;
- (bool)pu_wantsNavigationBarVisible;
- (void)setAlbum:(id)arg1 existingFetchResult:(id)arg2;
- (bool)shouldShowMenu;
- (bool)shouldShowSectionHeaders;
- (void)viewDidLoad;

@end