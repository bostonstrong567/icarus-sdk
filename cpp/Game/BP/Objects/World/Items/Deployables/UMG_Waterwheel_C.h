// /Game/BP/Objects/World/Items/Deployables/UMG_Waterwheel.UMG_Waterwheel_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2F9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Waterwheel_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShelterWarning;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0290, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* DeviceWarningPulse;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ActivateFrame;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ActivatePrompt;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Border;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CraftingDeviceInfo;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DeviceInfo;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList_C_1;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeviceInfo_C* UMG_DeviceInfo;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeviceInventory_C* UMG_DeviceInventory;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FuelInventory_C* UMG_FuelInventory;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerInventory_C* UMG_PlayerInventory;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GeneratorState;  // 0x02F8, size 0x1

    UFUNCTION() void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CloseUI(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Waterwheel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
