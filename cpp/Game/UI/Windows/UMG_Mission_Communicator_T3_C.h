// /Game/UI/Windows/UMG_Mission_Communicator_T3.UMG_Mission_Communicator_T3_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Mission_Communicator_T3_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AnglePiece;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CannotRequestMission;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CanRequest;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CanRequestMission;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CommunicatorUnsheltered;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DynamicMissionTimeout;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DynamicMissionUnavaible;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionBoardProspectSelected_C* ProspectSelectedView;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* ProspectViewSlot;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RecentlyCancelled;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Requested;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* SwitchProspectView;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x0300, size 0x18, named "Session Flag"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOpenWorld;  // 0x0318, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo NewProspectInfo;  // 0x0320, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EOnProspectAvailability EncryptMissions;  // 0x03C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DeviceName;  // 0x03C8, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_TalentView_Prospect_C* TalentViewProspect;  // 0x03E0, size 0x8

    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_T2_UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CancelQuest();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Mission_Communicator_T3(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetArchetypeForCurrentProspectData(FTalentArchetypesRowHandle& Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetQuestCancelDelay();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCallable) void OperationCancelled();
    UFUNCTION(BlueprintCallable) void OperationSelected(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void PlayProspectAudio(FProspectServerInfo Prospect);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void StopProspectAudio();
    UFUNCTION(BlueprintCallable) void TalentProspectSelected(FProspectServerInfo ProspectInfo, FText Error);  // parameters 0x1C8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
