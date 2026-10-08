// /Game/UI/Hab/DropTerminal/UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectHistoryEntry_C : public UUserWidget, public IUserObjectListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Inactive;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* MainButton;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectDifficulty;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectTime;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectType;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_ProspectState> Prospect_State;  // 0x02A0, size 0x1, named "Prospect State"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<E_ButtonState>, FSlateColor> Prospect_Pin_State_Text_Colour;  // 0x02A8, size 0x50, named "Prospect Pin State Text Colour"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor DifficultyColour;  // 0x02F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor In_Color_and_Opacity;  // 0x0320, size 0x28, named "In Color and Opacity"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Active;  // 0x0348, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UProspectHistoryResult* ProspectEntry;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo ProspectInfo;  // 0x0358, size 0xA0

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ProspectHistoryEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetProspectDifficulty(EMissionDifficulty Difficulty, FName& RowName);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetTimeRemaining();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) ESlateVisibility Get_Inactive_Visibility_0();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetHasClaimedProspect();
    UFUNCTION(BlueprintCallable) void SetState(TEnumAsByte<E_ProspectState> NewState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateProspectInfo();
    UFUNCTION(BlueprintCallable) void UpdateTextColor();
    UFUNCTION(BlueprintCallable) void UpdateTooltip(FText TooltipText);  // parameters 0x18
};
