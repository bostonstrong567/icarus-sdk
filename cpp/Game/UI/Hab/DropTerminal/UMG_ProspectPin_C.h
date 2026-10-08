// /Game/UI/Hab/DropTerminal/UMG_ProspectPin.UMG_ProspectPin_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0xA99, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectPin_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ActiveInsessiontext;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ActivePlayers;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* AssignedPlayers;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AssignedPlayersText;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BackgroundHostName;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BackgroundProspectPin;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BackgroundSlot;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BackgroundSlot_1;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ButtonBase;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CoinIcon;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CostDetails;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CostText;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_2;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_3;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_4;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DifficultyExoticsVbox;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* DifficultyHbox;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DifficultyText;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DifficutlyIcon;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Divider;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ExoticPlaceholder;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ExoticsHbox;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* FactionMission;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* FilledBorder;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* FrameProspectPin;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HostIcon;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HostName;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HostNameOverlay;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Hours;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* HoveredButtonBorder;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HoveredButtonText;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HoveredLines;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HoverEffects;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HoverPrompt;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Minutes;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PersistantText;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* PlayerSlots;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pointer;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PointerBorder;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PointerFrame;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PromptBorder;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* PromptText;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ProspectTitleBackground;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Seconds;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotsIcon;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotsIcon_1;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SlotsTitle;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SlotsTitle_1;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Time;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimeBorder;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPinFactionMission_C* UMG_ProspectPinFactionMission;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* VersionMismatch;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* VersionNumber;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* VersionText;  // 0x0430, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TitleText_Hovered;  // 0x0438, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TitleText_Default;  // 0x0460, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor DetailTitleText_Default;  // 0x0488, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectServerInfo ProspectInfo;  // 0x04B0, size 0x1B0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_ProspectState> ProspectState;  // 0x0660, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectSelected ProspectSelected;  // 0x0668, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor DifficultyText_Easy;  // 0x0678, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor DifficultyText_Normal;  // 0x06A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor DifficultyText_Hard;  // 0x06C8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor DifficultyText_Extreme;  // 0x06F0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor DifficultyTextColor;  // 0x0718, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor SlotsText_Hover;  // 0x0740, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Hovered;  // 0x0768, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Pressed;  // 0x0769, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TitleText_Pressed;  // 0x0770, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Frame_Default;  // 0x0798, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Frame_Hovered;  // 0x07A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Frame_Pressed;  // 0x07B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_PinState> Pin_State;  // 0x07C8, size 0x1, named "Pin State"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Title;  // 0x07CC, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TitleBackground_Default;  // 0x07DC, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TitleBackground_Hover;  // 0x07EC, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TitleBackground_Pressed;  // 0x07FC, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Background_Hovered;  // 0x080C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Background_Pressed;  // 0x081C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Background_Default;  // 0x082C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Black;  // 0x0840, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Claimed_Default;  // 0x0868, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Claimed_Hover;  // 0x0878, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Claimed_Pressed;  // 0x0888, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Claimable_Default;  // 0x0898, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Claimable_Hover;  // 0x08A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Claimable_Pressed;  // 0x08B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Detail_Title_Text_Default;  // 0x08C8, size 0x28, named "Detail Title Text Default"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor OpenDefault;  // 0x08F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Open_Hover;  // 0x0900, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Open_Pressed;  // 0x0910, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Joined_Default;  // 0x0920, size 0x10, named "Joined Default"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Joined_Hover;  // 0x0930, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Joined_Pressed;  // 0x0940, size 0x10, named "Joined Pressed"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor CalimableFrame_Default;  // 0x0950, size 0x10, named "CalimableFrame Default"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor ClaimableTitle;  // 0x0960, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EIcarusProspectDifficulty, FColor> DifficultyColourMap;  // 0x0988, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor CoinDefault;  // 0x09D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor CoinHovered;  // 0x0A00, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor CoinPressed;  // 0x0A28, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Occupied_Default;  // 0x0A50, size 0x10, named "Occupied Default"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Occupied_Hovered;  // 0x0A60, size 0x10, named "Occupied Hovered"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Occupied_Pressed;  // 0x0A70, size 0x10, named "Occupied Pressed"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Active;  // 0x0A80, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectExpired ProspectExpired;  // 0x0A88, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Persistent;  // 0x0A98, size 0x1, named "Is Persistent"

    UFUNCTION() void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_ProspectPin(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ProspectExpired__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ProspectSelected__DelegateSignature(FProspectServerInfo Prospect, bool Active);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable) void SetHasClaimedProspect();
    UFUNCTION(BlueprintCallable) void SetHoverdPrompt(TEnumAsByte<E_ProspectState> ProspectState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPromptText(TEnumAsByte<E_ProspectState> ProspectState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetProspectInfo(FProspectServerInfo Prospect);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void SetState(TEnumAsByte<E_ProspectState> NewState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTime(TArray<FString>& Time);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update_Pin_Visuals(TEnumAsByte<E_PinState> PinState);  // parameters 0x1, named "Update Pin Visuals"
};
