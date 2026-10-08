// /Game/UI/UMG_CharacterSetting_ToggleBase.UMG_CharacterSetting_ToggleBase_C
// Derives from: UUMG_CharacterSetting_Base_C > UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CharacterSetting_ToggleBase_C : public UUMG_CharacterSetting_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_SettingName;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* Toggle;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelectionUpdated_0 SelectionUpdated_0;  // 0x02F0, size 0x10

    UFUNCTION() void BndEvt__UMG_CharacterSetting_ToggleBase_CheckBox_514_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_CharacterSetting_ToggleBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetSelectionDisplayName(FText& DisplayName);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SelectionUpdated_0__DelegateSignature(int32 Index, FPreviewCameraSettingsEnum NewFocus);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
