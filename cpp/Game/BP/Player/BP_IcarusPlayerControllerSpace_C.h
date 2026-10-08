// /Game/BP/Player/BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C
// Derives from: AIcarusPlayerControllerSpace > AIcarusPlayerController > AIcarusController > APlayerController > AController > AActor > UObject
// size 0xE68, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Game)
class ABP_IcarusPlayerControllerSpace_C : public AIcarusPlayerControllerSpace, public IUIControllerInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07E8, size 0x8
    UPROPERTY() float MoveToOperable_NewTrack_0_AE7BB1BA4A6ECAA53003F08A62920011;  // 0x07F0, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> MoveToOperable__Direction_AE7BB1BA4A6ECAA53003F08A62920011;  // 0x07F4, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* MoveToOperable;  // 0x07F8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterfaceSpace_C* UserInterface;  // 0x0800, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FocusedOnObject;  // 0x0808, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FProspectServerInfo ProspectInfo;  // 0x0810, size 0x1B0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Requested_Prospect_Info;  // 0x09C0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) UBP_InputCaptureComponent_C* InputCapture;  // 0x09C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AIcarusPlayerCharacter> PlayerCharacterClass;  // 0x09D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTransitioningPossession;  // 0x09D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusCharacterDummy_C* DefaultCharacterDummy;  // 0x09E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusCameraPawn_C* CharacterSelectionCamera;  // 0x09E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<ESpaceMenuScene>, ABP_SpaceMenuCamera_C*> MenuScreenCameras;  // 0x09F0, size 0x50
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FOnlineProfileCharacter SelectedCharacter;  // 0x0A40, size 0xD0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AExponentialHeightFog* FxInteriorFogComponent;  // 0x0B10, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterLoadout Retrieved_Character_Loadout;  // 0x0B18, size 0x138, named "Retrieved Character Loadout"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLoadoutTutorialShown;  // 0x0C50, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequiresBackendInitialisation;  // 0x0C51, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaItem> Meta_Inventory;  // 0x0C58, size 0x10, named "Meta Inventory"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaItem> Loadout_Inventory;  // 0x0C68, size 0x10, named "Loadout Inventory"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusSession SessionInvite;  // 0x0C78, size 0x1C0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle Account_Flag;  // 0x0E38, size 0x18, named "Account Flag"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaCurrencyRowHandle PassiveRefundRow;  // 0x0E50, size 0x18

    UFUNCTION() void AcceptInvite(FIcarusSession SessionToJoin);  // parameters 0x1C0
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AcceptSessionInvite(FIcarusSession SessionToJoin);  // parameters 0x1C0
    UFUNCTION(BlueprintCallable) void BackendConnection_PostInitialise();
    UFUNCTION(BlueprintCallable, Server, Reliable) void BackendConnection_SetCharacter(FOnlineProfileCharacter SelectedCharacter);  // parameters 0xD0
    UFUNCTION(BlueprintCallable) void BeginInputCapture(UBP_InputCaptureComponent_C* InputCaptureComponent, AActor* CapturedActor);  // parameters 0x10
    UFUNCTION() void BndEvt__BP_IcarusPlayerControllerSpace_PlayerDataComponent_K2Node_ComponentBoundEvent_0_OnMetaInventoryChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CharacterFlagToAccountFlagConversion(AIcarusPlayerState* PlayerState);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Client, Reliable) void ClientOnPossess();
    UFUNCTION(BlueprintCallable) void ClientUpdateSelectedCharacter();
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_CheaterAlert(FString Name);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Client, Reliable) void CloseUI();
    UFUNCTION(BlueprintCallable) void CreateUI();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UIcarusLinkedActorPanelBase* DisplayDynamicWidget(TSubclassOf<UIcarusLinkedActorPanelBase> WidgetClass, AActor* LinkedActorForWidget);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void DoNothing_Confirmation();
    UFUNCTION(BlueprintCallable) void EndInputCapture();
    UFUNCTION(BlueprintCallable) void ExecuteClaimLaunchProspect(FProspectInfo Prospect_Info, FOnlineProfileCharacter OnlineProfileCharacter);  // parameters 0x170
    UFUNCTION(BlueprintCallable) void ExecuteJoinProspect(FIcarusSession IcarusSession, FOnlineProfileCharacter OnlineProfileCharacter, FString ExtraSettings);  // parameters 0x2A0
    UFUNCTION(BlueprintCallable) void ExecuteResumeProspect(FAssociatedProspectInfo AssociatedProspectInfo, FOnlineProfileCharacter OnlineProfileCharacter);  // parameters 0x1A8
    UFUNCTION() void ExecuteUbergraph_BP_IcarusPlayerControllerSpace(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Get_End_Of_Drop_Screen_Info();  // named "Get End Of Drop Screen Info"
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UCheatOverlayBase* GetCheatOverlay(UObject* WorldContextObject) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetIsThirdPerson() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetProspectInfo(FProspectServerInfo& ProspectServerInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void GetUserInterface(UUMG_UserInterface_Base_C*& UserInterface) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UUserInterfaceBase* GetUserInterfaceInternal() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasActiveSelectedCharacter(bool& HasSelectedCharacter);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Homestead_PassiveFlagCheck();
    UFUNCTION() void InpActEvt_AltFire_K2Node_InputActionEvent_7(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_AltFire_K2Node_InputActionEvent_8(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Escape_K2Node_InputActionEvent_2(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Escape_K2Node_InputKeyEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Fire_K2Node_InputActionEvent_10(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Fire_K2Node_InputActionEvent_9(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_3(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Interact_K2Node_InputActionEvent_6(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Jump_K2Node_InputActionEvent_4(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Jump_K2Node_InputActionEvent_5(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_OpenBestiaryIndex_K2Node_InputActionEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_OpenBestiary_K2Node_InputActionEvent_1(FKey Key);  // parameters 0x18
    UFUNCTION() void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void JoinSession_Confirmation();
    UFUNCTION(BlueprintCallable, Client, Reliable) void Kick();
    UFUNCTION(BlueprintCallable, Client, Reliable) void LeaveSession();
    UFUNCTION(BlueprintCallable, Client, Reliable) void LerpToInputCaptureLocation(AActor* Target);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void MailRequest();
    UFUNCTION() void MoveToOperable__FinishedFunc();
    UFUNCTION() void MoveToOperable__UpdateFunc();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void NotifyOfCheater(FString CharacterName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void On_Mouse_Sensitivity_Changed();  // named "On Mouse Sensitivity Changed"
    UFUNCTION(BlueprintImplementableEvent) void OnActiveCharacterSet();
    UFUNCTION(BlueprintCallable) void OnClient_SetReadyState(bool Ready);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnConnectedPlayerInitialised();
    UFUNCTION(BlueprintCallable) void OnFailure_153E3E574849CADDC230B4BDF276D6E3(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnFailure_5F9E1E7C4E38E77D32A72DAA4B267722(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnFailure_C61F5EF443F6FA83FE9C9EBEFD43DCD9(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnRep_ProspectInfo();
    UFUNCTION(BlueprintCallable, Server, Reliable) void OnServer_GiveFocusToObject(AActor* Object);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void OnServer_ReturnFocus();
    UFUNCTION(BlueprintCallable, Server) void OnServer_SetReadyState(bool Ready);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnSuccess_153E3E574849CADDC230B4BDF276D6E3(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnSuccess_5F9E1E7C4E38E77D32A72DAA4B267722(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnSuccess_C61F5EF443F6FA83FE9C9EBEFD43DCD9(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Client, Reliable) void Open_Drop_Screen();  // named "Open Drop Screen"
    UFUNCTION(BlueprintCallable) void OpenFieldGuideToItem(FFieldGuideCategoriesRowHandle Category, FItemsStaticRowHandle Item, bool ForceShowNone);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossess(APawn* PossessedPawn);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void RefreshSessionSettings();
    UFUNCTION(BlueprintCallable, Server) void RequestSessionSettings();
    UFUNCTION(BlueprintCallable) void Return_to_Character_Select();  // named "Return to Character Select"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ReturnToCharacterSelect();
    UFUNCTION(BlueprintCallable) void ServerPushClientDynamicWidget(TSubclassOf<UUMG_IcarusLinkedActorPanel_C> WidgetClass, AActor* LinkedActorForWidget);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetCharacterInitialisationUI();
    UFUNCTION(BlueprintCallable) void SetCharacterUI();
    UFUNCTION(BlueprintCallable) void ShowLoadingScreen_Event(bool Show);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateCharacterPossession();
    UFUNCTION(BlueprintCallable) void UpdateSessionSettings(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
};
