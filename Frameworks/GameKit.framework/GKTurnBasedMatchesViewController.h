/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKTurnBasedMatchesDataSource, GKMatchRequest, <GKTurnBasedMatchmakerViewControllerDelegate>, GKTurnBasedMatchmakerViewController;

@interface GKTurnBasedMatchesViewController : GKTableViewControllerV2 <GKTurnBasedInviteViewControllerDelegate> {
    <GKTurnBasedMatchmakerViewControllerDelegate> *_delegate;
    GKTurnBasedMatchmakerViewController *_matchmakerViewController;
    GKTurnBasedMatchesDataSource *_matchesDataSource;
    BOOL _showExistingMatches;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _formSheetInsets;
    GKMatchRequest *_matchRequest;
    BOOL _showingExistingMatches;
    int _maxMatchesSeen;
}

@property <GKTurnBasedMatchmakerViewControllerDelegate> * delegate;
@property GKTurnBasedMatchmakerViewController * matchmakerViewController;
@property(retain) GKTurnBasedMatchesDataSource * matchesDataSource;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } formSheetInsets;
@property BOOL showExistingMatches;
@property(retain) GKMatchRequest * matchRequest;
@property BOOL showingExistingMatches;
@property int maxMatchesSeen;


- (void)setMaxMatchesSeen:(int)arg1;
- (int)maxMatchesSeen;
- (void)setShowExistingMatches:(BOOL)arg1;
- (BOOL)showExistingMatches;
- (void)setMatchmakerViewController:(id)arg1;
- (void)turnBasedInviteViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)turnBasedInviteViewController:(id)arg1 didCreateSession:(id)arg2;
- (void)turnBasedInviteViewControllerWasCancelled:(id)arg1;
- (void)showInvitationAlertForMatch:(id)arg1;
- (void)prepareDataSource;
- (void)receivedTurnBasedNotification:(id)arg1;
- (void)authenticatedStatusChanged:(id)arg1;
- (void)addPressed;
- (void)showInviteControllerAnimated:(BOOL)arg1;
- (id)matchesDataSource;
- (BOOL)showingExistingMatches;
- (void)setMatchesDataSource:(id)arg1;
- (void)setShowingExistingMatches:(BOOL)arg1;
- (void)tableView:(id)arg1 didDeleteMatch:(id)arg2 withIndexPath:(id)arg3 fromSection:(id)arg4;
- (void)didSelectMatch:(id)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)_gkResetContents;
- (id)initWithMatchRequest:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })formSheetInsets;
- (id)matchmakerViewController;
- (void)setFormSheetInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)cancelButtonPressed;
- (id)matchRequest;
- (void)setMatchRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)title;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)delegate;
- (id)description;
- (void)dealloc;

@end