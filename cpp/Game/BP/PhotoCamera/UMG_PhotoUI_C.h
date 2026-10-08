// /Game/BP/PhotoCamera/UMG_PhotoUI.UMG_PhotoUI_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x468, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PhotoUI_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Flash;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* Ascend;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_Dev;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_Shortcuts;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CameraSetting_LookAtPlayer_C* CameraSetting_LookAtPlayer;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CameraSetting_MaintainHeight_C* CameraSetting_MaintainHeight;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_ToggleCollision_C* CameraSetting_ToggleCollision;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_Checkbox_C* Checkbox_PathLoop;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Controls;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* Decend;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* Exit;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FrameBottomLeft;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FrameBottomRight;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FrameTopLeft;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FrameTopRight;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* HideUI;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_194;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* KeyPrompts;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_BloomIntensity_C* PostProcessSetting_BloomIntensity;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_BloomThreshold_C* PostProcessSetting_BloomThreshold;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_DoF_C* PostProcessSetting_DoF;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_DofFStop_C* PostProcessSetting_DofFStop;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_Gamma_C* PostProcessSetting_Gamma;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_MotionBlur_C* PostProcessSetting_MotionBlur;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_Saturation_C* PostProcessSetting_Saturation;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_Vinette_C* PostProcessSetting_Vignette;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* PresetNameBox;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MultiToggle_C* PresetSelector;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* SettingsContainer;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* TakePhoto;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_ReferenceActor;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* TextBox_SavedCameraPath;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_ClearRecord;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_EndRecord;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_PathLoad;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_PathSave;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_SetReference;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_StartPlayback;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_StartRecord;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_StopPlayback;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Camera_Shortcut_C* UMG_Camera_Shortcut_HideUI;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Camera_Shortcut_C* UMG_Camera_Shortcut_Sprint;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CameraSetting_DetachFromPlayer_C* UMG_CameraSetting_DetachFromPlayer;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CameraSetting_Exposure_C* UMG_CameraSetting_Exposure;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CameraSetting_FOV_C* UMG_CameraSetting_FOV;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CameraSetting_Resolution_C* UMG_CameraSetting_Resolution;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CameraSetting_ScrollSpeed_C* UMG_CameraSetting_ScrollSpeed;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CameraSetting_Smoothing_C* UMG_CameraSetting_Smoothing;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CameraSetting_Speed_C* UMG_CameraSetting_Speed;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_CameraPaths;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_Checkbox_Radio_ScrollFOV_C* W_PostProcessEntry_Checkbox_Radio_ScrollFOV;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_Checkbox_Radio_ScrollMove_C* W_PostProcessEntry_Checkbox_Radio_ScrollMove;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_ISO_C* W_PostProcessEntry_ISO;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_PostProcessEntry_MaxAperture_C* W_PostProcessEntry_MaxAperture;  // 0x0418, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* SpectatorActor;  // 0x0420, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UW_PostProcessEntry_C*> SettingsEntries;  // 0x0428, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPostProcessSettingsUpdated PostProcessSettingsUpdated;  // 0x0438, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UBP_SpectatorSaveGame_C* SaveGame;  // 0x0448, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ControlsVisible;  // 0x0450, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DelayedStartTimer;  // 0x0458, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* PathReferenceActor;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable) void ApplySaveGame();
    UFUNCTION() void BndEvt__UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature(int32 PreviousToggleIndex, int32 CurrentToggleIndex);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PhotoUI_PresetNameBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__UMG_PhotoUI_TextBox_SavedCameraPath_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_PhotoUI_UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PhotoUI_UMG_BasicButton_ClearRecord_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PhotoUI_UMG_BasicButton_EndRecord_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PhotoUI_UMG_BasicButton_PathLoad_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PhotoUI_UMG_BasicButton_PathSave_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PhotoUI_UMG_BasicButton_SetReference_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PhotoUI_UMG_BasicButton_StartPlayback_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PhotoUI_UMG_BasicButton_StartRecord_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PhotoUI_UMG_BasicButton_StopPlayback_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PhotoUI_W_PostProcessEntry_Checkbox_K2Node_ComponentBoundEvent_11_EntryChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ChangePreset(int32 NewIndex);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DelayStartRecording();
    UFUNCTION(BlueprintCallable) void EntryFunction(FString Param);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_UMG_PhotoUI(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillEmptySaveGame();
    UFUNCTION(BlueprintCallable) void Get_Preset_Name_from_Save_Game(int32 Index, FText& PresetName);  // parameters 0x20, named "Get Preset Name from Save Game"
    UFUNCTION(BlueprintCallable) void GetCameraPathActor(ACameraPathRecorder*& OutActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetLookAtActor(AActor*& OutActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetPresetFromSaveGame(int32 Index, TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData>& Preset);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void InitEntries();
    UFUNCTION(BlueprintCallable) void InitSaveGame();
    UFUNCTION(BlueprintCallable) void InputChangePreset(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSettingChanged();
    UFUNCTION(BlueprintCallable) void PhotoTaken();
    UFUNCTION(BlueprintCallable) void PostProcessSettingsUpdated__DelegateSignature(FPostProcessSettings Settings);  // parameters 0x560
    UFUNCTION(BlueprintCallable) void SaveCurrentPreset();
    UFUNCTION(BlueprintCallable) void SavePresetToSaveGame(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetEntryValuesFromPreset(TMap<TSoftClassPtr<UWidget>, FPostProcessSaveData> Preset, bool Reset);  // parameters 0x51
    UFUNCTION(BlueprintCallable) void SetGameFocus();
    UFUNCTION(BlueprintCallable) void SetPresetName(FText PresetName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SpectatorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ToggleControlsVisible();
    UFUNCTION(BlueprintCallable) void UpdateCurrentPresetName(int32 PresetIndex);  // parameters 0x4
};
