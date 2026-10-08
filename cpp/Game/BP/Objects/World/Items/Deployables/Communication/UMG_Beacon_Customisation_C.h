// /Game/BP/Objects/World/Items/Deployables/Communication/UMG_Beacon_Customisation.UMG_Beacon_Customisation_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x344, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Beacon_Customisation_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* ColorSelectionPanel;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* ConfirmButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* EditableTextBox;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* EditableTextBox_IconSearch;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_ViewDistanceButtons;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* ListView_Icons;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_OwnerOnly;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption_2;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption_3;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption_4;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption_5;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption_6;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_Type;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor IconColour;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UTextureListItem*> IconListItems;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Portable_Beacon_C* BeaconReference;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCharacters;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString TempString;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxDisplayDistance;  // 0x0340, size 0x4

    UFUNCTION() void BndEvt__UMG_Beacon_Customisation_EditableTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_EditableTextBox_IconSearch_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Beacon_Customisation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateItemList(TArray<FItemableRowHandle>& ValidItemables);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBeaconViewDistanceChanged(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnColorSelected(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ProxyUpdateStyle();
    UFUNCTION(BlueprintCallable) void SetIconColour(FLinearColor Color);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ToggleInitialDistanceOption();
    UFUNCTION(BlueprintCallable) void UpdateIconList(TArray<UObject*>& Items);  // parameters 0x10
};
