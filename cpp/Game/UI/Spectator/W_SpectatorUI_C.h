// /Game/UI/Spectator/W_SpectatorUI.W_SpectatorUI_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x348, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_SpectatorUI_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_167;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* FilteredActionBox;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HelpText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ResetButton;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* UI;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MultiToggle_C* UMG_MultiToggle;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_BloomIntensity_C* W_PostProcessEntry_BloomIntensity;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_BloomThreshold_C* W_PostProcessEntry_BloomThreshold;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_CameraSmoothing_C* W_PostProcessEntry_CameraSmoothing;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_DoF_C* W_PostProcessEntry_DoF;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_DofFStop_C* W_PostProcessEntry_DofFStop;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_DofRadius_C* W_PostProcessEntry_DofRadius;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_Gamma_C* W_PostProcessEntry_Gamma;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_MotionBlur_C* W_PostProcessEntry_MotionBlur;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_MouseSmoothing_C* W_PostProcessEntry_MouseSmoothing;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_Saturation_C* W_PostProcessEntry_Saturation;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_ToggleCollision_C* W_PostProcessEntry_ToggleCollision;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_ToggleProjection_C* W_PostProcessEntry_ToggleProjection;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_Vinette_C* W_PostProcessEntry_Vinette;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_ProjectionInterface_Spectator_C* W_ProjectionInterface_Spectator;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* SpectatorActor;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> InputConsumeArray;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UW_PostProcessEntry_C*> PostProcessEntries;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSettingsUpdated SettingsUpdated;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UBP_SpectatorSaveGame_C* SaveGame;  // 0x0340, size 0x8

    UFUNCTION(BlueprintCallable) void ApplySaveGame();
    UFUNCTION() void BndEvt__Button_167_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature(int32 PreviousToggleIndex, int32 CurrentToggleIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ChangePreset(int32 NewIndex);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CustomEvent_0();
    UFUNCTION(BlueprintCallable) void EntryFunction(FString Param);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_W_SpectatorUI(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillEmptySaveGame();
    UFUNCTION(BlueprintCallable) void GetPresetFromSaveGame(int32 Index, TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData>& Preset);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_HelpText_Text_0();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void InitEntries();
    UFUNCTION(BlueprintCallable) void InitSaveGame();
    UFUNCTION(BlueprintCallable) void InputChangePreset(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InventoryPressed();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable) void SaveCurrentPreset();
    UFUNCTION(BlueprintCallable) void SavePresetToSaveGame(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetEntryValuesFromPreset(TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData> Preset, bool Reset);  // parameters 0x51
    UFUNCTION(BlueprintCallable) void SetGameFocus();
    UFUNCTION(BlueprintCallable) void SettingsUpdated__DelegateSignature(FPostProcessSettings Settings);  // parameters 0x560
    UFUNCTION(BlueprintCallable) void SpectatorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void ToggleHelpScreen();
    UFUNCTION(BlueprintCallable) void UpdatePostProcess();
};
