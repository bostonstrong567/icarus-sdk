// /Game/UI/Hab/DropTerminal/CustomGameSettings/UMG_CustomGameSettings.UMG_CustomGameSettings_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CustomGameSettings_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ApplyButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BackButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_MouseCapture;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CategoryBox;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ContentVBox;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ResetToDefaultsButton;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SettingOptionDescription;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnSettingsChanged OnSettingsChanged;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, int32> CurrentSettings;  // 0x02B8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, int32> InitialSettings;  // 0x0308, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECustomGameStatChangeability Context;  // 0x0358, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<ECustomGameStatCategory, UUMG_CustomGameSettingsSection_C*> SectionLookup;  // 0x0360, size 0x50

    UFUNCTION(BlueprintCallable) void ApplyCurrentSettings();
    UFUNCTION() void BndEvt__UMG_CustomGameSettings_ApplyButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_CustomGameSettings_BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_CustomGameSettings_ResetToDefaultsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DisplaySettings(ECustomGameStatChangeability Context, const TArray<FCustomGameSetting>& InitialSettings);  // parameters 0x18
    UFUNCTION() void ExecuteUbergraph_UMG_CustomGameSettings(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetInitialValueOrDefault(FName RowName, const int32& Default, int32& Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GoBack();
    UFUNCTION(BlueprintCallable) void HasUnsavedChanges(bool& HasUnsavedChanges) const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MakeCustomGameSettings(TArray<FCustomGameSetting>& CustomGameSettings);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCallable) void OnConfirmGoBack();
    UFUNCTION(BlueprintCallable) void OnConfirmResetToDefaults();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable) void OnSectionSettingChanged(FName SettingRowName, int32 NewValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnSettingHovered(FText Text);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnSettingsChanged__DelegateSignature(TArray<FCustomGameSetting>& NewSettingValues);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ResetValuesToDefault();
};
