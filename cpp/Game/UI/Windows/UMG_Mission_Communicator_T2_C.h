// /Game/UI/Windows/UMG_Mission_Communicator_T2.UMG_Mission_Communicator_T2_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x389, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Mission_Communicator_T2_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AnglePiece;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* AvailableQuests;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CannotRequestMission;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CanRequest;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CanRequestMission;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CommunicatorUnsheltered;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DynamicMissionTimeout;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DynamicMissionUnavaible;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* PriorityMissions;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RecentlyCancelled;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Requested;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DynamicQuestOption_C* UMG_DynamicQuestOption;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DynamicQuestOption_C* UMG_DynamicQuestOption_1;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PriorityMissionOverlay_C* UMG_PriorityMissionOverlay;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x0308, size 0x18, named "Session Flag"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOpenWorld;  // 0x0320, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle PROMission1;  // 0x0324, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectListRowHandle PROProspect1;  // 0x033C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CompletedP1;  // 0x0354, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CompletedP2;  // 0x0355, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle PROMission2;  // 0x0358, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectListRowHandle PROProspect2;  // 0x0370, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Outpost_Prospect;  // 0x0388, size 0x1, named "Is Outpost Prospect"

    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_T2_UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_T2_UMG_PriorityMissionOverlay_K2Node_ComponentBoundEvent_4_StartMission__DelegateSignature(FFactionMissionsRowHandle Mission, FProspectListRowHandle Prospect);  // parameters 0x30
    UFUNCTION() void BndEvt__UMG_Mission_Communicator_T2_UMG_PriorityMissionOverlay_K2Node_ComponentBoundEvent_5_DismissOverlay__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CancelQuest();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Mission_Communicator_T2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetIcarusMap(FTalentArchetypesRowHandle& Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetQuestCancelDelay();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCallable) void RefreshAbandonedText();
    UFUNCTION(BlueprintCallable) void SelectedQuest(FDynamicQuestsRowHandle Quest);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateMissionStart();
};
