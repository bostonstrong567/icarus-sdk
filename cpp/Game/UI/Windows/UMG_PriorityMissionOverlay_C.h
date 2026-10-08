// /Game/UI/Windows/UMG_PriorityMissionOverlay.UMG_PriorityMissionOverlay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x390, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PriorityMissionOverlay_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BottomDivider;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BottomDivider_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_2;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_3;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_4;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* DismissButton;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Hours;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_4;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_5;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Minutes;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PrioirtyMissionDescription;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* PriorityMissionButton;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PriorityMissionName;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* PriorityMissions;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProspectImage;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Seconds;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TechBorder;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TechImage;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TechTierText;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Time;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimeColourBorder;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TopDivider;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TopDivider_1;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionDifficulty_C* UMG_MissionDifficulty;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectRewardDisplay_C* UMG_ProspectRewardDisplay;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FStartMission StartMission;  // 0x0340, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDismissOverlay DismissOverlay;  // 0x0350, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectListRowHandle Prospect;  // 0x0360, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Mission;  // 0x0378, size 0x18

    UFUNCTION() void BndEvt__UMG_PriorityMissionOverlay_PriorityMissionButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PriorityMissionOverlay_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Dismiss();
    UFUNCTION(BlueprintCallable) void DismissOverlay__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_PriorityMissionOverlay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(FProspectListRowHandle NewMission);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTime(TArray<FString>& Time);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void StartMission__DelegateSignature(FFactionMissionsRowHandle Mission, FProspectListRowHandle Prospect);  // parameters 0x30
};
