// /Game/BP/Objects/World/Items/Deployables/UMG_Thumper_Deep.UMG_Thumper_Deep_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x303, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Thumper_Deep_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShelterWarning;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0290, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* DeviceWarningPulse;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ActivateFrame;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ActivatePrompt;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* EnergyActivationButton;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_Drills;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_ThumperInfo;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_ThumperInfo_1;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_ToReroll;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList_C_1;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeviceInfo_C* UMG_DeviceInfo;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FuelInventory_C* UMG_FuelInventory;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerInventory_C* UMG_PlayerInventory;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GeneratorState;  // 0x0300, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSheltered;  // 0x0301, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseDeviceOnOffToggle;  // 0x0302, size 0x1

    UFUNCTION() void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckLocalState(bool ForceUpdate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckShelteredIndicator();
    UFUNCTION(BlueprintCallable) void CloseUI(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable, BlueprintPure) void DepositsToString(TArray<AActor*>& Deposts, FText& NoDrillText, FText& DrillText);  // parameters 0x40
    UFUNCTION() void ExecuteUbergraph_UMG_Thumper_Deep(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ShowShelterWarningStyle(bool Sheltered);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) ESlateVisibility ShowShelteredIndicator();  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void ToggleDeviceOnOff();
    UFUNCTION(BlueprintCallable) void UpdateLocalState(bool State);  // parameters 0x1
};
