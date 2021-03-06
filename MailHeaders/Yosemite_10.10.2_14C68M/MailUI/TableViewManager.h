/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MVSelectionOwner.h"
#import "MailTableViewDelegate.h"
#import "NSTableViewDataSource.h"

@class ConversationPrefetcher, MFMessageThread, MailTableView, MessageListContainerView, MessageMall, MessageViewer, NSArray, NSCache, NSDictionary, NSFont, NSMapTable, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTableColumn, NSTableHeaderView, TableViewScrollState;

@interface TableViewManager : NSObject <MVSelectionOwner, MailTableViewDelegate, NSTableViewDataSource>
{
    MessageMall *_messageMall;
    NSMutableArray *_rawSelection;
    NSMutableSet *_mouseTrackers;
    NSFont *_font;
    NSMutableAttributedString *_truncatedString;
    NSMutableDictionary *_truncatedStringAttributes;
    NSMutableDictionary *_truncatedParagraphStyle;
    NSMutableSet *_selectedConversationIDs;
    id _snippetLock;
    NSMutableSet *_messagesBeingFetched;
    unsigned long long _lastRequestedRow;
    NSMapTable *_messageProxyObjects;
    BOOL _isFocused;
    BOOL _sortColumnOrderAscending;
    BOOL _mailboxSortColumnOrderAscending;
    BOOL _isInThreadedMode;
    BOOL _includeDeleted;
    BOOL _isShowingSearchResults;
    BOOL _awaitingInitialScrollPosition;
    BOOL _scrollFoundSelectionIntoView;
    BOOL _awaitingInitialSelection;
    BOOL _clearSelectionOnUpdate;
    BOOL _threadOpeningIsInProgress;
    BOOL _threadClosingIsInProgress;
    BOOL _doubleClickThreadOpeningIsInProgress;
    BOOL _animatingThreadOpening;
    BOOL _animatingThreadClosing;
    BOOL _dontUpdateTrackingRects;
    BOOL _useBoldFontForUnreadMessages;
    BOOL _clearingSearch;
    BOOL _selectionShouldNotChange;
    BOOL _selectingMessagesForTransfer;
    BOOL _needsColumnSetup;
    BOOL _keepSelectionWhenTogglingThread;
    unsigned char _suspendChangesToScrollingAndSelection;
    BOOL _isRichMessageList;
    BOOL _didAwake;
    BOOL _isShowingToCc;
    int _nextMessageDirection;
    int _searchTarget;
    MailTableView *_tableView;
    MessageViewer *_delegate;
    MessageListContainerView *_messageListContainerView;
    NSArray *_tableColumns;
    NSMapTable *_storeStateTable;
    NSDictionary *_messageIDsToSelectWhenOpened;
    NSArray *_threadIDsToOpenWhenOpened;
    long long _sortColumnOrder;
    long long _mailboxSortColumnOrder;
    long long _initialScrollType;
    TableViewScrollState *_savedScrollState;
    NSDictionary *_initialMailboxViewingState;
    long long _windowWidthBeforeSearch;
    NSFont *_boldFont;
    NSArray *_draggedMessages;
    NSArray *_filteredMessagesFromMouseDown;
    NSString *_messageIDToReveal;
    NSCache *_snippetsForMessage;
    ConversationPrefetcher *_conversationPrefetcher;
    NSArray *_expandedSelection;
    NSArray *_expandedSelectionForTransfer;
    long long _leftmostTextColumn;
    long long _colorHighlightLeftEdge;
    long long _colorHighlightWidth;
    MFMessageThread *_threadBeingClosed;
    MFMessageThread *_threadBeingOpened;
    long long _lastMouseDownInUnreadColumnEventNumber;
    long long _numberOfSelectedRowsBeforeTogglingThread;
    unsigned long long _numberOfSnippetLines;
    NSTableColumn *_richTableColumn;
    NSTableHeaderView *_tableHeaderView;
    long long _previouslyViewedMessageRow;
    long long _currentViewedMessageRow;
    long long _searchField;
    struct _NSRange _filteredMessagesRange;
    struct CGPoint _lastMouseDownInUnreadColumnPoint;
    struct CGPoint _currentMouseLocationInWindow;
}

+ (id)_getThreadBackgroundColorForThread:(id)arg1;
+ (id)_getDarkerThreadBackgroundColorForThread:(id)arg1;
+ (id)specialImageForMessageCount:(unsigned long long)arg1 offset:(struct CGPoint *)arg2;
+ (BOOL)isColumnValid:(long long)arg1;
+ (void)initialize;
@property(nonatomic) long long searchField; // @synthesize searchField=_searchField;
@property(nonatomic) int searchTarget; // @synthesize searchTarget=_searchTarget;
@property(nonatomic) int nextMessageDirection; // @synthesize nextMessageDirection=_nextMessageDirection;
@property(nonatomic) long long currentViewedMessageRow; // @synthesize currentViewedMessageRow=_currentViewedMessageRow;
@property(nonatomic) long long previouslyViewedMessageRow; // @synthesize previouslyViewedMessageRow=_previouslyViewedMessageRow;
@property(retain, nonatomic) NSTableHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) NSTableColumn *richTableColumn; // @synthesize richTableColumn=_richTableColumn;
@property(nonatomic) unsigned long long numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
@property(nonatomic) BOOL isShowingToCc; // @synthesize isShowingToCc=_isShowingToCc;
@property(nonatomic) BOOL didAwake; // @synthesize didAwake=_didAwake;
@property(nonatomic) long long numberOfSelectedRowsBeforeTogglingThread; // @synthesize numberOfSelectedRowsBeforeTogglingThread=_numberOfSelectedRowsBeforeTogglingThread;
@property(nonatomic) struct CGPoint currentMouseLocationInWindow; // @synthesize currentMouseLocationInWindow=_currentMouseLocationInWindow;
@property(nonatomic) long long lastMouseDownInUnreadColumnEventNumber; // @synthesize lastMouseDownInUnreadColumnEventNumber=_lastMouseDownInUnreadColumnEventNumber;
@property(nonatomic) struct CGPoint lastMouseDownInUnreadColumnPoint; // @synthesize lastMouseDownInUnreadColumnPoint=_lastMouseDownInUnreadColumnPoint;
@property(nonatomic) __weak MFMessageThread *threadBeingOpened; // @synthesize threadBeingOpened=_threadBeingOpened;
@property(nonatomic) __weak MFMessageThread *threadBeingClosed; // @synthesize threadBeingClosed=_threadBeingClosed;
@property(nonatomic) long long colorHighlightWidth; // @synthesize colorHighlightWidth=_colorHighlightWidth;
@property(nonatomic) long long colorHighlightLeftEdge; // @synthesize colorHighlightLeftEdge=_colorHighlightLeftEdge;
@property(nonatomic) long long leftmostTextColumn; // @synthesize leftmostTextColumn=_leftmostTextColumn;
@property(nonatomic) struct _NSRange filteredMessagesRange; // @synthesize filteredMessagesRange=_filteredMessagesRange;
@property(copy, nonatomic) NSArray *expandedSelectionForTransfer; // @synthesize expandedSelectionForTransfer=_expandedSelectionForTransfer;
@property(copy, nonatomic) NSArray *expandedSelection; // @synthesize expandedSelection=_expandedSelection;
@property(retain, nonatomic) ConversationPrefetcher *conversationPrefetcher; // @synthesize conversationPrefetcher=_conversationPrefetcher;
@property(readonly, nonatomic) NSCache *snippetsForMessage; // @synthesize snippetsForMessage=_snippetsForMessage;
@property(retain, nonatomic) NSString *messageIDToReveal; // @synthesize messageIDToReveal=_messageIDToReveal;
@property(retain, nonatomic) NSArray *filteredMessagesFromMouseDown; // @synthesize filteredMessagesFromMouseDown=_filteredMessagesFromMouseDown;
@property(copy, nonatomic) NSArray *draggedMessages; // @synthesize draggedMessages=_draggedMessages;
@property(nonatomic) BOOL isRichMessageList; // @synthesize isRichMessageList=_isRichMessageList;
@property(retain, nonatomic) NSFont *boldFont; // @synthesize boldFont=_boldFont;
@property(nonatomic) long long windowWidthBeforeSearch; // @synthesize windowWidthBeforeSearch=_windowWidthBeforeSearch;
@property(nonatomic) unsigned char suspendChangesToScrollingAndSelection; // @synthesize suspendChangesToScrollingAndSelection=_suspendChangesToScrollingAndSelection;
@property(nonatomic) BOOL keepSelectionWhenTogglingThread; // @synthesize keepSelectionWhenTogglingThread=_keepSelectionWhenTogglingThread;
@property(nonatomic) BOOL needsColumnSetup; // @synthesize needsColumnSetup=_needsColumnSetup;
@property(nonatomic) BOOL selectingMessagesForTransfer; // @synthesize selectingMessagesForTransfer=_selectingMessagesForTransfer;
@property(nonatomic) BOOL selectionShouldNotChange; // @synthesize selectionShouldNotChange=_selectionShouldNotChange;
@property(nonatomic) BOOL clearingSearch; // @synthesize clearingSearch=_clearingSearch;
@property(nonatomic) BOOL useBoldFontForUnreadMessages; // @synthesize useBoldFontForUnreadMessages=_useBoldFontForUnreadMessages;
@property(nonatomic) BOOL dontUpdateTrackingRects; // @synthesize dontUpdateTrackingRects=_dontUpdateTrackingRects;
@property(readonly, nonatomic) BOOL animatingThreadClosing; // @synthesize animatingThreadClosing=_animatingThreadClosing;
@property(readonly, nonatomic) BOOL animatingThreadOpening; // @synthesize animatingThreadOpening=_animatingThreadOpening;
@property(nonatomic) BOOL doubleClickThreadOpeningIsInProgress; // @synthesize doubleClickThreadOpeningIsInProgress=_doubleClickThreadOpeningIsInProgress;
@property(nonatomic) BOOL threadClosingIsInProgress; // @synthesize threadClosingIsInProgress=_threadClosingIsInProgress;
@property(nonatomic) BOOL threadOpeningIsInProgress; // @synthesize threadOpeningIsInProgress=_threadOpeningIsInProgress;
@property(nonatomic) BOOL clearSelectionOnUpdate; // @synthesize clearSelectionOnUpdate=_clearSelectionOnUpdate;
@property(nonatomic) BOOL awaitingInitialSelection; // @synthesize awaitingInitialSelection=_awaitingInitialSelection;
@property(copy, nonatomic) NSDictionary *initialMailboxViewingState; // @synthesize initialMailboxViewingState=_initialMailboxViewingState;
@property(retain, nonatomic) TableViewScrollState *savedScrollState; // @synthesize savedScrollState=_savedScrollState;
@property(nonatomic) BOOL scrollFoundSelectionIntoView; // @synthesize scrollFoundSelectionIntoView=_scrollFoundSelectionIntoView;
@property(nonatomic) long long initialScrollType; // @synthesize initialScrollType=_initialScrollType;
@property(nonatomic) BOOL awaitingInitialScrollPosition; // @synthesize awaitingInitialScrollPosition=_awaitingInitialScrollPosition;
@property(nonatomic) long long mailboxSortColumnOrder; // @synthesize mailboxSortColumnOrder=_mailboxSortColumnOrder;
@property(nonatomic) long long sortColumnOrder; // @synthesize sortColumnOrder=_sortColumnOrder;
@property(nonatomic) BOOL isShowingSearchResults; // @synthesize isShowingSearchResults=_isShowingSearchResults;
@property(nonatomic) BOOL includeDeleted; // @synthesize includeDeleted=_includeDeleted;
@property(nonatomic) BOOL isInThreadedMode; // @synthesize isInThreadedMode=_isInThreadedMode;
@property(nonatomic) BOOL mailboxSortColumnOrderAscending; // @synthesize mailboxSortColumnOrderAscending=_mailboxSortColumnOrderAscending;
@property(nonatomic) BOOL sortColumnOrderAscending; // @synthesize sortColumnOrderAscending=_sortColumnOrderAscending;
@property(nonatomic) BOOL isFocused; // @synthesize isFocused=_isFocused;
@property(copy, nonatomic) NSArray *threadIDsToOpenWhenOpened; // @synthesize threadIDsToOpenWhenOpened=_threadIDsToOpenWhenOpened;
@property(copy, nonatomic) NSDictionary *messageIDsToSelectWhenOpened; // @synthesize messageIDsToSelectWhenOpened=_messageIDsToSelectWhenOpened;
@property(retain, nonatomic) NSMapTable *storeStateTable; // @synthesize storeStateTable=_storeStateTable;
@property(copy, nonatomic) NSArray *tableColumns; // @synthesize tableColumns=_tableColumns;
@property(retain, nonatomic) MessageListContainerView *messageListContainerView; // @synthesize messageListContainerView=_messageListContainerView;
@property(nonatomic) __weak MessageViewer *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MailTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)hideDeletions;
- (void)showDeletions;
- (id)messageToSelectIfEntireSelectionRemoved:(id)arg1;
- (void)_recordSelectionHistoryForRow:(long long)arg1;
- (void)_resetNextMessageTracking;
- (BOOL)_goUpInsteadOfDown;
- (long long)_indexOfFirstNonDeletedNonSelectedMessage:(long long)arg1 withinRowRange:(struct _NSRange)arg2 goUp:(BOOL)arg3;
@property(retain, nonatomic) MessageMall *messageMall;
- (id)mailTableView:(id)arg1 rangesForBackgroundShadingInRange:(struct _NSRange)arg2 shadingColors:(id *)arg3 leftColumnColors:(id *)arg4;
- (BOOL)shouldTrackMouse:(id)arg1;
- (void)mailTableView:(id)arg1 gotEvent:(id)arg2;
- (void)_setButtonCellNeedsDisplay;
- (void)_callWillDisplayCellForClickedCell;
- (struct CGPoint)_mouseLocationInWindow;
- (struct CGRect)frameOfClickedCell;
- (void)mailTableView:(id)arg1 willDrawRowsInRange:(struct _NSRange)arg2;
- (id)mailTableView:(id)arg1 dragImageForRowsWithIndexes:(id)arg2 event:(id)arg3 dragImageOffset:(struct CGPoint *)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)mailTableView:(id)arg1 didMouseDown:(id)arg2;
- (void)mailTableView:(id)arg1 willMouseDown:(id)arg2;
- (void)mailTableViewDragWillEnd:(id)arg1 operation:(unsigned long long)arg2;
- (void)transfer:(id)arg1 didCompleteWithError:(id)arg2;
- (id)messagesToTransferIsMove:(BOOL)arg1;
- (id)_filterAndExpandMessagesForTransfer:(id)arg1;
- (void)mailTableViewDraggingSession:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)archiveMessages:(id)arg1 allowUndo:(BOOL)arg2;
- (BOOL)shouldDeleteMessagesGivenCurrentState:(id)arg1;
- (void)undeleteMessagesAllowingUndo:(BOOL)arg1;
- (void)deleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3;
- (void)_redeleteMessages:(id)arg1 messagesToSelect:(id)arg2;
- (void)undeleteMessages:(id)arg1 allowUndo:(BOOL)arg2;
- (void)_undeleteMessages:(id)arg1 allowUndo:(BOOL)arg2 unreadMessages:(id)arg3;
- (void)_adjustScrollPositionForTransferredMessages:(id)arg1 isUndo:(BOOL)arg2;
- (id)_undoActionNameForMessageCount:(unsigned long long)arg1;
- (BOOL)mailTableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)messageStore;
- (id)currentDisplayedMessage;
- (id)parentThreadForChildMessage:(id)arg1;
- (id)messageThatUserIsProbablyReading;
- (void)selectMessages:(id)arg1;
- (void)_selectMessages:(id)arg1 scrollIfNeeded:(BOOL)arg2;
- (id)actionMessagesForAction:(SEL)arg1;
- (id)selection;
- (id)selectionExpandingThreadsAndHiddenCopies:(BOOL)arg1;
- (void)deleteSelectionAllowingMoveToTrash:(BOOL)arg1;
- (void)deleteKeyPressed;
- (unsigned long long)_photoSizeForNumberOfSnippetLines:(unsigned long long)arg1;
- (void)_snippetsUpdated:(id)arg1;
- (id)_localizeSnippet:(id)arg1;
- (void)_updateRowsWithNewSnippets:(id)arg1;
- (void)_updateSnippetsForMessage:(id)arg1 ignoreExpected:(BOOL)arg2;
- (void)clearSnippetCacheForMessages:(id)arg1;
- (void)mallPrefetchedSnippets:(id)arg1;
- (void)resetSnippetCache;
- (id)_messagesNeedingSnippetsAroundRow:(unsigned long long)arg1;
- (void)_performSnippetFetching;
- (void)_cacheSnippetsAroundRow:(unsigned long long)arg1;
- (id)_snippetFetchQueue;
- (id)_snippetForMessage:(id)arg1;
- (void)_doubleClickedMessage:(id)arg1;
- (id)mailTableViewTopLineColor:(id)arg1;
- (int)mailTableView:(id)arg1 highlightStyleForRow:(long long)arg2 inRect:(struct CGRect *)arg3 color:(id *)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)_resetObjectValueForCellView:(id)arg1;
- (BOOL)_shouldShowMailboxNames;
- (void)_prepareCell:(id)arg1 withMessage:(id)arg2;
- (id)_prepareProxyForMessage:(id)arg1 selected:(BOOL)arg2 createIfNeeded:(BOOL)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (void)_setupRowView:(id)arg1 atIndex:(long long)arg2;
- (void)_setupRowViewAtRow:(long long)arg1;
- (void)tableViewColumnDidResize:(id)arg1;
- (void)tableViewColumnDidMove:(id)arg1;
- (void)mailTableViewDidEndLiveResize:(id)arg1;
- (void)mailTableViewWillStartLiveResize:(id)arg1;
- (void)tableViewFrameChangedDuringLiveResize:(id)arg1;
- (void)tableView:(id)arg1 didDragTableColumn:(id)arg2;
- (void)updateColorHighlightEdges;
- (id)_proxyForMessage:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_truncatedAttributedStringForString:(id)arg1 message:(id)arg2 row:(long long)arg3 shouldIndent:(BOOL)arg4;
- (id)_colorForMessage:(id)arg1 inRow:(long long)arg2 withCell:(id)arg3;
- (id)_messageSelectionColor;
- (id)_attributesForTruncatedParagraphStyle;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)selectionStateLog;
- (void)_datesNeedRedisplay:(id)arg1;
- (void)mailTableViewDidResignFirstResponder:(id)arg1;
- (void)mailTableViewDidBecomeFirstResponder:(id)arg1;
- (void)_redisplayRowsAboveSelected;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)_normalizedSelection:(id)arg1;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)_selectOrDeselectMembersOfThread:(id)arg1 atIndex:(long long)arg2 select:(BOOL)arg3;
- (void)updateViewingPaneToSelection;
- (id)selectedThread;
- (id)_messageSelectionWithDataForPrinting:(BOOL)arg1;
- (id)messageSelectionForPrinting;
- (id)messageSelection;
- (void)removeAllMouseTrackers;
- (void)addMouseTrackersObject:(id)arg1;
@property(copy, nonatomic) NSSet *mouseTrackers;
- (id)_openThreadIdentifiers;
- (void)_rawSelectionIdentifiersForThreads:(id *)arg1 identifiersForMessages:(id *)arg2;
- (id)_mailboxViewingState;
- (void)removeAllRawSelection;
- (void)addRawSelectionObject:(id)arg1;
- (void)replaceObjectInRawSelectionAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromRawSelectionAtIndex:(unsigned long long)arg1;
- (id)objectInRawSelectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfRawSelection;
@property(retain, nonatomic) NSArray *rawSelection;
- (void)_updateSelectedThreadList;
- (void)_reloadDisplayOnlyForMessagesInSet:(id)arg1 highlightOnly:(BOOL)arg2;
- (BOOL)_isMessageInSelectedThread:(id)arg1;
- (long long)mailTableView:(id)arg1 shouldScrollRowToVisible:(long long)arg2;
- (void)scrollRowToVisible:(long long)arg1 position:(int)arg2;
- (BOOL)isSelectionVisible;
- (void)showSelectionAndCenter:(BOOL)arg1;
- (void)selectPreviousReplyToParent;
- (void)selectNextReplyToParent;
- (void)selectPeer:(BOOL)arg1;
- (void)selectFirstReplyToMessage;
- (void)selectParentOfMessage;
- (void)selectPreviousMessage:(int)arg1;
- (void)selectNextMessage:(int)arg1;
- (BOOL)nextMessageIsBelow;
- (void)selectOldestUnreadOrNewestMessageInThread;
- (BOOL)openSelectedThread;
- (void)stepOutOfSelectedThread;
- (void)stepIntoSelectedThread;
- (void)selectNextMessageMovingUpward:(int)arg1;
- (void)selectNextMessageMovingDownward:(int)arg1;
- (unsigned long long)_modifierFlagsForKeyboardNavigation;
- (BOOL)selectionIsExactlyOneOpenThread;
- (BOOL)canSelectNextReplyToParent;
- (BOOL)canSelectFirstReplyToMessage;
- (BOOL)canSelectParentOfMessage;
- (BOOL)canSelectNextThreadedMessage;
- (BOOL)canSelectPreviousThreadedMessage;
- (long long)_indexOfMessageNearest:(long long)arg1 numberOfRows:(long long)arg2 downward:(BOOL)arg3;
- (void)toggleThread:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (void)toggleThread:(id)arg1;
- (void)unhideMessages:(id)arg1;
- (BOOL)hideMessages:(id)arg1;
- (void)closeAllThreads;
- (void)openAllThreads;
- (void)closeThread:(id)arg1;
- (void)openThread:(id)arg1;
- (void)invalidateSelectionCache:(id)arg1;
- (void)toggleThreadedMode;
@property(retain, nonatomic) NSFont *font;
- (void)_updateTableViewRowHeight;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (double)tableViewRowHeightForRichMessageList:(BOOL)arg1;
- (void)makeMessageListFirstResponder;
- (void)selectAllMessagesAndMakeFirstResponder;
- (long long)tableViewNumberOfColumnsToPinToLefthandSide:(id)arg1;
- (BOOL)mailTableView:(id)arg1 shouldAddTableColumn:(id)arg2;
- (BOOL)mailTableView:(id)arg1 shouldRemoveTableColumn:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (void)_setColumn:(long long)arg1 toVisible:(BOOL)arg2;
- (void)setColumn:(long long)arg1 toVisible:(BOOL)arg2;
- (void)_updateAttributesForMailboxes;
- (BOOL)isColumnVisible:(long long)arg1;
- (BOOL)_isAutomaticInsertionWhileSearchingOkayForColumn:(long long)arg1;
- (BOOL)_isColumnVisibleInSettings:(long long)arg1;
- (id)_unreadColumn;
- (id)_columnWithIdentifierTag:(long long)arg1;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)_updateTableHeaderToMatchCurrentSort;
- (void)_threadColorPreferenceChanged:(id)arg1;
- (void)_snippetLinePreferenceChanged:(id)arg1;
- (void)_toCcPreferenceChanged:(id)arg1;
- (void)_viewerLayoutPreferenceChanged:(id)arg1;
- (void)_viewerPreferencesChanged:(id)arg1;
- (BOOL)canSelectPreviousMessage;
- (BOOL)canSelectNextMessage;
- (void)readStoreSpecificAttributesFromDictionary:(id)arg1;
- (void)readStoreSpecificAttributesFromMailbox:(id)arg1;
- (void)writeStoreSpecificAttributesToMailbox:(id)arg1;
- (void)writeAttributesToDictionary:(id)arg1;
- (void)readAttributesFromDictionary:(id)arg1;
- (void)setupColumnManagerFromDictionary:(id)arg1;
- (void)_mallConversationsUpdated:(id)arg1;
- (void)_messageMarkedForOverwrite:(id)arg1;
- (void)prepareForWindowClose;
- (void)dealloc;
- (void)_configureTableViewLayoutWithTableColumnResizingMasks:(id)arg1;
- (void)_setupColumnsForTableView;
- (void)showFollowupsToMessageAtRow:(long long)arg1;
- (void)showFollowupsToMessage:(id)arg1;
- (void)richUnreadButtonClicked:(id)arg1;
- (void)_createTintedImages;
- (void)_configureRichMessageListColumn;
- (void)_configureColumnForRolloverCell:(id)arg1 alignment:(unsigned long long)arg2 action:(SEL)arg3;
- (void)_configureColumnForImageCell:(id)arg1 alignment:(unsigned long long)arg2;
- (void)_configureColumnForEndTruncation:(id)arg1;
- (void)_setupTableColumnWidths;
- (void)_setupColumnHeaderIcon:(id)arg1 inColumnWithIdentifier:(id)arg2 accessibilityLabel:(id)arg3 alignment:(unsigned long long)arg4;
- (void)userDidScrollInTableView:(id)arg1;
- (void)_tableViewScrolled:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)tableViewGetDefaultMenu:(id)arg1;
- (void)_unregisterTableViewNibs;
- (void)_registerTableViewNibs;
- (void)awakeFromNib;
- (id)init;
- (long long)_columnForAppleScriptColumn:(unsigned int)arg1;
- (void)setAppleScriptVisibleColumns:(id)arg1;
- (id)appleScriptVisibleColumns;
- (void)setAppleScriptSortColumn:(unsigned int)arg1;
- (unsigned int)appleScriptSortColumn;
- (void)mailTableViewDidMoveToWindow:(id)arg1;
- (void)mailTableView:(id)arg1 willMoveToWindow:(id)arg2;
- (double)_scrollRectToVisibleAdjustment:(struct CGRect)arg1 visibleRect:(struct CGRect)arg2;
- (BOOL)_isRowVisible:(long long)arg1;
- (double)_getAnimationDuration:(unsigned long long)arg1;
- (unsigned long long)_indexOfMemberToSelectWhenOpeningThread:(id)arg1;
- (void)updateTrackingRects;
- (void)clearTrackingRects;
- (id)filteredMessages;
- (void)setIsSortedAscending:(BOOL)arg1;
- (BOOL)isSortedAscending;
- (void)setSortColumn:(long long)arg1 ascending:(BOOL)arg2;
- (id)sortByStringForColumn:(long long)arg1;
- (long long)sortColumn;
- (BOOL)isSortedChronologically;
- (BOOL)isSortedByDateReceived;
- (void)searchForString:(id)arg1 in:(int)arg2 withOptions:(long long)arg3;
- (void)searchForSuggestions:(id)arg1 in:(int)arg2 withOptions:(long long)arg3 fromSuggestionsSearchField:(id)arg4;
- (void)_updateInitialViewingState;
- (void)_searchForString:(id)arg1 orSuggestions:(id)arg2 in:(int)arg3 withOptions:(long long)arg4 fromSuggestionsSearchField:(id)arg5;
- (void)clearSearch;
- (void)messagesRemovedFromMall:(id)arg1;
- (void)_updateSearchDelegate;
- (void)mallFinishedLoading:(id)arg1;
- (void)_setupColumns;
- (void)mallStructureChanged:(id)arg1;
- (void)mallStructureWillChange:(id)arg1;
- (void)mallSortChanged:(id)arg1;
- (void)reloadMailboxes:(id)arg1;
- (void)setMailboxes:(id)arg1 isSettingUpUI:(BOOL)arg2;
- (void)_restoreScrollState:(id)arg1;
- (id)_currentScrollState;
- (BOOL)_debugThreadAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

