// /Game/UI/Hab/DropTerminal/UMG_Prospect.UMG_Prospect_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3BC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Prospect_C : public UUserWidget, public IUserObjectListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* FactionMissonOverlay;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_Favorites_C* FavoritesButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HardcoreIcon;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HostName;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Inactive;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* MainButton;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PasswordRequired;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PingText;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PlayerCount;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Privacy;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectDifficulty;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectTime;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPinFactionMission_C* UMG_ProspectPinFactionMission_1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* VersionBox;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* VersionMismatch;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* VersionRevision;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* VersionText;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_ProspectState> Prospect_State;  // 0x0300, size 0x1, named "Prospect State"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<E_ButtonState>, FSlateColor> Prospect_Pin_State_Text_Colour;  // 0x0308, size 0x50, named "Prospect Pin State Text Colour"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor DifficultyColour;  // 0x0358, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor In_Color_and_Opacity;  // 0x0380, size 0x28, named "In Color and Opacity"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Active;  // 0x03A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UIcarusSessionResult* SessionResult;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Ping;  // 0x03B8, size 0x4

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_1_Untoggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Prospect(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetProspectDifficulty(EMissionDifficulty Difficulty, FName& RowName);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetTimeRemaining();  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetState(TEnumAsByte<E_ProspectState> NewState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateFavoriteState(bool Toggled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdatePing();
    UFUNCTION(BlueprintCallable) void UpdateProspectInfo();
    UFUNCTION(BlueprintCallable) void UpdateTextColor();
    UFUNCTION(BlueprintCallable) void UpdateTooltip(FText TooltipText);  // parameters 0x18
};
