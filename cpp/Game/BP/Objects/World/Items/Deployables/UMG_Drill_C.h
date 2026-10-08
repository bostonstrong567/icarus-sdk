// /Game/BP/Objects/World/Items/Deployables/UMG_Drill.UMG_Drill_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Drill_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShelterWarning;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0290, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* DeviceWarningPulse;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ActivatePrompt;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BenchName;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* EnergyActivationButton;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* InsufficientPowerWarning;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ResourcesPerMin;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ResourcesRemaining;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeviceInventory_C* UMG_DeviceInventory;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ExtractionElement_C* UMG_ExtractionElement;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FuelInventory_C* UMG_FuelInventory;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerInventory_C* UMG_PlayerInventory;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GeneratorState;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSheltered;  // 0x02F9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CachedMiningTime;  // 0x02FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CachedExtractorEffectiveness;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseDeviceOnOffToggle;  // 0x0304, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastCachedBrownOutStrength;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UResourceComponent* ResourceComponent;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AResourceDeposit* ResourceDepositRef;  // 0x0318, size 0x8

    UFUNCTION() void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckLocalState(bool ForceUpdate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CloseUI(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Drill(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void ToggleDeviceOnOff();
    UFUNCTION(BlueprintCallable) void UpdateDeviceMineSpeed();
    UFUNCTION(BlueprintCallable) void UpdateLocalState(bool State);  // parameters 0x1
};
