// /Game/UI/Components/UMG_MountCommands.UMG_MountCommands_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x410, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MountCommands_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MountBehaviourSetting_C* Setting_Combat;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MountBehaviourSetting_C* Setting_Grazing;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MountBehaviourSetting_C* Setting_Movement;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MountBehaviourSetting_C* Setting_Survival;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_IconSwap_C* StandSit;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Titlebar_C* UMG_TitlebarCommands;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_Cargo;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum Inventory_ID;  // 0x02A8, size 0x10, named "Inventory ID"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideTakeAllButton;  // 0x02B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EMountCombatBehaviourState, int32> SupportedCombatStates;  // 0x02C0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EMountMovementBehaviourState, int32> SupportedMovementStates;  // 0x0310, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<SwapButtonOption> Options;  // 0x0360, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EMountConsumptionBehaviourState, int32> SupportedConsumptionStates;  // 0x0370, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EMountGrazingBehaviourState, int32> SupportedGrazingStates;  // 0x03C0, size 0x50

    UFUNCTION(BlueprintCallable) void BuildSupportedStateOptions();
    UFUNCTION() void ExecuteUbergraph_UMG_MountCommands(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetEnumForButtonIndex(TMap<uint8, int32> Options, int32 Index, uint8& EnumByte) const;  // parameters 0x55
    UFUNCTION(BlueprintCallable) void MovementUpdated(int32 OptionIndex, SwapButtonOption OptionData);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnCombatStateChanged(int32 OptionIndex, SwapButtonOption OptionData);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnConsumptionStateChanged(int32 OptionIndex, SwapButtonOption OptionData);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnGrazingStateChanged(int32 OptionIndex, SwapButtonOption OptionData);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetLinkedActor(AActor* LinkedActor);  // parameters 0x8
};
