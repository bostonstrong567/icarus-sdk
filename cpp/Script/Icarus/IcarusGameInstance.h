// /Script/Icarus.IcarusGameInstance
// Derives from: UGameInstance > UObject
// size 0x910, declared in Icarus/Source/Icarus/Systems/IcarusGameInstance.h

UCLASS(Transient, Config=Game)
class UIcarusGameInstance : public UGameInstance
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bLoginAttempted;  // 0x01A8, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) int32 MapVersion;  // 0x01AC, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) int32 MapGeneratedVersion;  // 0x01B0, size 0x4
    UPROPERTY() ULobbyMessageCallbackProxyGen* LobbyMessageCallback;  // 0x01C8, size 0x8
    UPROPERTY(BlueprintAssignable) FLoadingScreenChangedSignature LoadingScreenChanged;  // 0x0218, size 0x10
    UPROPERTY(EditAnywhere) UScopedViewportBlocker* ProspectLoadViewportBlocker;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere) int32 ViewportBlockerCount;  // 0x0230, size 0x4
    UPROPERTY(BlueprintAssignable) FFocusChangedSignature OnWindowReceivedFocus;  // 0x03A0, size 0x10
    UPROPERTY(BlueprintAssignable) FFocusChangedSignature OnWindowLostFocus;  // 0x03B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText PresenceHabitatLocationText;  // 0x03C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText PresenceProspectLocationText;  // 0x03D8, size 0x18
    UPROPERTY(BlueprintReadOnly) FBlueprintSessionResult SessionToJoin;  // 0x0438, size 0x108
    UPROPERTY(Instanced) TWeakObjectPtr<UUserWidget> InBetweenLoadingScreen;  // 0x0558, size 0x8
    UPROPERTY(BlueprintReadWrite) FMaintenanceStatus CurrentMaintenanceStatus;  // 0x0568, size 0x20
    UPROPERTY(BlueprintAssignable) FMaintenanceStatusUpdated MaintenanceStatusUpdated;  // 0x0588, size 0x10
    UPROPERTY(BlueprintAssignable) FLobbyLoginQueueUpdated LobbyQueueLoginUpdated;  // 0x0598, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 CurrentQueueSize;  // 0x05A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CurrentQueueSecondsRemaining;  // 0x05AC, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) bool DedicatedServerSessionInitialized;  // 0x05B0, size 0x1
    UPROPERTY(Config) int32 MaxRejoinAttempts;  // 0x05D0, size 0x4
    UPROPERTY() UIcarusJoinSession* RetryJoinSessionInstance;  // 0x05E0, size 0x8
    UPROPERTY() FIcarusSession LastJoinedSession;  // 0x05E8, size 0x1C0
    UPROPERTY() FOnlineProfileCharacter LastJoinedCharacter;  // 0x07A8, size 0xF0
    UPROPERTY(Instanced) TWeakObjectPtr<UConfirmationPopupBase> LastJoinedPopup;  // 0x0898, size 0x8
    UPROPERTY() TMap<EIcarusJoinConfirmationStep, FConfirmationPopupDetails> LastJoinedSetups;  // 0x08A0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ForcedProspectSaveFile;  // 0x0900, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FString LastMapName;  // 0x01B8, protected
    FTimerHandle QueueSystemRetryTimer;  // 0x01D0, protected
    TDelegate<void __cdecl(int,bool,FUniqueNetId const &,FString const &),FDefaultDelegateUserPolicy> OnLoginCompleteDelegate;  // 0x01D8, protected
    FDelegateHandle OnLoginCompleteDelegateHandle;  // 0x01E8, protected
    TDelegate<void __cdecl(int,bool,FString const &,FString const &),FDefaultDelegateUserPolicy> OnReadFriendsListComplete;  // 0x01F0, protected
    TDelegate<void __cdecl(int,enum ELoginStatus::Type,enum ELoginStatus::Type,FUniqueNetId const &),FDefaultDelegateUserPolicy> OnLoginStatusChangedDelegate;  // 0x0200, protected
    FDelegateHandle OnLoginStatusChangedDelegateHandle;  // 0x0210, protected
    FTimerHandle HideInBetweenLoadingScreenTimer;  // 0x0238, protected
    FDelegateHandle HandleNetworkFailureDelegateHandle;  // 0x0240, protected
    bool bHandledNetworkFailure;  // 0x0248, protected
    FOnlineProfileCharacter LocalSelectedCharacter;  // 0x0250, private
    FText DropName;  // 0x0340, private
    FOnlineProfileUser LocalUserProfile;  // 0x0358, private
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> CreateCompleteDelegate;  // 0x03F0, private
    FDelegateHandle CreateCompleteDelegateHandle;  // 0x0400, private
    TDelegate<void __cdecl(FName,enum EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy> JoinCompleteDelegate;  // 0x0408, private
    FDelegateHandle JoinCompleteDelegateHandle;  // 0x0418, private
    FText LastPresenceLocation;  // 0x0420, private
    TDelegate<void __cdecl(bool,int,TSharedPtr<FUniqueNetId const ,0>,FOnlineSessionSearchResult const &),FDefaultDelegateUserPolicy> SessionInviteAcceptedDelegate;  // 0x0540, protected
    FDelegateHandle SessionInviteAcceptedDelegateHandle;  // 0x0550, protected
    bool bShowingInBetweenLoadingScreen;  // 0x0560, protected
    FTimerHandle SentryContextUpdateHandle;  // 0x05B8, protected
    FTimerHandle BackupGameDataHandle;  // 0x05C0, protected
    int32 BackupFrequency;  // 0x05C8, protected
    int32 CurrentRejoinAttemptCount;  // 0x05CC, protected
    FTimerHandle RejoinServerTimerHandle;  // 0x05D8, protected
    FString LastJoinedOptions;  // 0x08F0, protected

    UFUNCTION() void AutomaticallyUpdateSentryContext();
    UFUNCTION() void BackupGameData();
    UFUNCTION() FText GetLastPresenceLocation() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FOnlineProfileCharacter GetLocalSelectedCharacter() const;  // parameters 0xF0
    UFUNCTION(BlueprintCallable, BlueprintPure) FOnlineProfileUser GetLocalUserProfile();  // parameters 0x48
    UFUNCTION() void HandleLevelStreamedOut(ULevel* Level, UWorld* World);  // parameters 0x10
    UFUNCTION() void HandlePostLoadMap(UWorld* World);  // parameters 0x8
    UFUNCTION() void HandlePreLoadMap(FString MapName);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasLocalSelectedCharacter() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasLocalUserProfile() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsInBetweenLoadingScreenShowing() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsViewportBlockerActive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Login();
    UFUNCTION(BlueprintCallable) void LoginIcarus();
    UFUNCTION() void OnLobbyMessageComplete(const FResLobbyMessage& Response);  // parameters 0x18
    UFUNCTION() void OnRetryJoinServerFailed(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION() void OnRetryJoinServerSuccess(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void OnSessionInviteAcceptedEvent(int32 ControllerId, const FBlueprintSessionResult& InviteResult);  // parameters 0x110
    UFUNCTION(BlueprintCallable) void ResetLocalSelectedCharacter();
    UFUNCTION(BlueprintCallable) void SetLocalSelectedCharacter(const FOnlineProfileCharacter& NewLocalSelectedCharacter);  // parameters 0xF0
    UFUNCTION(BlueprintCallable, BlueprintPure) void SetLocalUserProfile(const FOnlineProfileUser& NewLocalUserProfile);  // parameters 0x48
    UFUNCTION() void TryRejoinServer();
    UFUNCTION(BlueprintCallable) void UpdatePresence(APlayerController* PlayerController, FText NewLocation, FName SessionName);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void UpdateSentryContext();

    // Virtual functions that start here:
    //   UpdateSentryContext_Implementation
};
