// /Game/UI/UMG_CharacterCreation.UMG_CharacterCreation_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x5A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CharacterCreation_C : public UUserWidget, public ICustomisationWidgetInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BlackFadeIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* AgeSelection_V2;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* angle;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* angle_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* angle_2;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* angle_3;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* angle_4;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* angle_5;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* angle_6;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* angle_7;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* angle_8;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* angle_9;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* angle_10;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* angle_11;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BlackFadeBorder;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BlackGradient;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* BodySelection;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* BodySelection_V2;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_1;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_9;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_GridBase_C* CapColorSelectionGrid;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* ComplexionSelection_V2;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CreateButton;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* CreateCharacterName;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWB_ChaCustom_UI_C* CustomCharacterFace;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* CustomizationOptions;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* CustomizationOptions_1;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* DecalSelection;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_3;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EditIcon;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* EyebrowsSelection_V2;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_GridBase_C* EyeColourSelectionGrid;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_GridBase_C* EyeColourSelectionGrid_V2;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* FacialHairSelection;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* FacialHairSelection_V2;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_GridBase_C* HairColourSelectionGrid_V2;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* HairStyleSelection;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* HairStyleSelection_V2;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* HeadSelection;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* HeadSelection_V2;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* HeadSelectionGrid;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_ToggleBase_C* HelmetSelection;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_ToggleBase_C* HoodSelection;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* NewFaceButton;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_V2;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* PiercingSelection_V2;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_ToggleBase_C* RebreatherSelection;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* ScarSelection;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* ScarSelection_V2;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterCustomization_Slider_C* SkinSaturationSelection;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterCustomization_Slider_C* SkinTintSelection;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterCustomization_Slider_C* SkinToneSelection;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_GridBase_C* SkinToneSelectionGrid;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_GridBase_C* SuitColorSelectionGrid;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_GridBase_C* SuitColorSelectionGrid_V2;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SuitImage;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* TattooSelection;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Visual_C* TattooSelection_V2;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Voice_C* VoiceSelection;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_Voice_C* VoiceSelection_V2;  // 0x0458, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCharacterCustomizationUpdated CharacterCustomizationUpdated;  // 0x0460, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECharacterBodyType CurrentBodyType;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TypedText;  // 0x0478, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPreviewCameraSettingsEnum CurrentFocus;  // 0x0490, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NameLengthLimit;  // 0x04A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECharacterCustomisationContext CustomisationContext;  // 0x04A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCustomisationCompleted CustomisationCompleted;  // 0x04A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCosmetics InitialCosmetics;  // 0x04B8, size 0x60
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCharacterCreationRequest CharacterCreationRequest;  // 0x0518, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FRequestCosmeticsUpdate RequestCosmeticsUpdate;  // 0x0528, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsGeneratingCustomisationOptions;  // 0x0538, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NewFace;  // 0x0539, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCosmetics Struct_Ref;  // 0x053C, size 0x60, named "Struct Ref"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PlayerPreviewManager_C* PlayerPreviewManager;  // 0x05A0, size 0x8

    UFUNCTION() void BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_CharacterCreation_UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CharacterCreationRequest__DelegateSignature(FReqCreateCharacter CharacterResult, int32 NumRetries, bool SelectNewCharacter);  // parameters 0x75
    UFUNCTION(BlueprintCallable) void CharacterCustomizationUpdated__DelegateSignature(FCharacterCosmetics CharacterData);  // parameters 0x60
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CreateCharacterResult(bool Success);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomisationCompleted__DelegateSignature(bool Success, FOnlineProfileCharacter NewCharacterInfo);  // parameters 0xD8
    UFUNCTION() void ExecuteUbergraph_UMG_CharacterCreation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateCustomisationOptions();
    UFUNCTION(BlueprintCallable) void GetCameraFocus(FPreviewCameraSettingsEnum& CameraFocus);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FReqCreateCharacter GetCharacterResult();  // parameters 0x70
    UFUNCTION(BlueprintCallable) void GetCosmeticData(FCharacterCosmetics& CosmeticData);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetInitialCosmeticsForCategory(ECharacterOptionCategory CategoryType, FCharacterCreationDataRowHandle& CosmeticDataRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) FString GetSelectedColorFromPanel(UPanelWidget* Target);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) UUMG_CharacterSetting_Base_C* GetSettingsWidgetForCategory(ECharacterOptionCategory CategoryType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GridSelectionUpdated(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HelmetSelected(int32 Index, FPreviewCameraSettingsEnum NewFocus);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void HoodSelected(int32 Index, FPreviewCameraSettingsEnum NewFocus);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void LevelLoaded();
    UFUNCTION(BlueprintCallable) void NameChanged(const FText& Text);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnCharacterCosmeticsUpdated(bool Success, FOnlineProfileCharacter UpdatedCharacter);  // parameters 0xD8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RequestCosmeticsUpdate__DelegateSignature(FReqUpdateCosmetics Request, int32 Retries);  // parameters 0x7C
    UFUNCTION(BlueprintCallable) void SelectionUpdated(int32 Index, FPreviewCameraSettingsEnum NewFocus);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SendCharacterCreationRequest();
    UFUNCTION(BlueprintCallable) void SendCosmeticUpdateRequest();
    UFUNCTION(BlueprintCallable) void SetInitialCosmetics(FCharacterCosmetics InitialCosmetics);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void SliderUpdate();
    UFUNCTION(BlueprintCallable) void UpdateBodyType();
    UFUNCTION(BlueprintCallable) void UpdateDefaultSelections();
    UFUNCTION(BlueprintCallable) void VerifyCustomisationOptionContexts();
};
