// /Game/UI/Hab/DropTerminal/CustomGameSettings/UMG_CustomGameSettings_Bool.UMG_CustomGameSettings_Bool_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x360, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CustomGameSettings_Bool_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_83;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Checkbox_C* CheckBox;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DarkTint;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* HoverButton;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* OuterBox;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SettingName;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RowName;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCustomGameStat SettingData;  // 0x02A0, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanEdit;  // 0x0320, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InitialValue;  // 0x0321, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnValueChanged OnValueChanged;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnSettingHovered OnSettingHovered;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0348, size 0x18

    UFUNCTION() void BndEvt__UMG_CustomGameSettings_Bool_CheckBox_K2Node_ComponentBoundEvent_0_Updated__DelegateSignature(bool Checked, bool WasForced);  // parameters 0x2
    UFUNCTION() void BndEvt__UMG_CustomGameSettings_Bool_HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CustomGameSettings_Bool(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSettingHovered__DelegateSignature(FText Text);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnValueChanged__DelegateSignature(FName RowName, int32 NewValue);  // parameters 0xC
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAlternate(bool Alternate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateDefaultStateTextHighlighting(bool CurrentValue);  // parameters 0x1
};
