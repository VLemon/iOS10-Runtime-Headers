/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDTableViewController : MPUTableViewController {
    AVExternalDevice * _externalDevice;
    bool  _limitedUI;
    bool  _limiting;
    MPMediaPredicate * _localPredicate;
    MCDNowPlayingButton * _nowPlayingButton;
    bool  _shouldHideIndexTitles;
    bool  _showMore;
    UIView * _snapshotView;
    UIColor * _tintColor;
    bool  _topLevel;
}

@property (readonly) bool currentAppIsPlaying;
@property (nonatomic) bool limitedUI;
@property (nonatomic) bool shouldHideIndexTitles;
@property (nonatomic) bool showMore;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) bool topLevel;

+ (Class)_tableViewClass;

- (void).cxx_destruct;
- (id)MPU_createNowPlayingButton;
- (void)_MCD_nowPlayingButtonAction:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_limitedUIDidChange;
- (void)_nowPlayingDidChangeNotification:(id)arg1;
- (void)_updateNowPlayingVisibility;
- (bool)_viewControllerWasSelected;
- (bool)currentAppIsPlaying;
- (void)dataSourceDidInvalidate;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (bool)limitedUI;
- (id)preferredFocusedItem;
- (void)reloadData;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setLimitedUI:(bool)arg1;
- (void)setShouldHideIndexTitles:(bool)arg1;
- (void)setShowMore:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTopLevel:(bool)arg1;
- (bool)shouldHideIndexTitles;
- (bool)shouldScrollToFirstDataSourceSectionOnInitialAppearance;
- (bool)shouldShowActionCellConfiguration:(Class)arg1;
- (bool)showMore;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromRowAtIndexPath:(id)arg3;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tintColor;
- (bool)topLevel;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end