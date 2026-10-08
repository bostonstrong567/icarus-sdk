// /Game/BP/Behaviours/Modifiers/BP_ModifierState_Charge.BP_ModifierState_Charge_C
// Derives from: UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x41C, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ModifierState_Charge_C : public UBP_Modifier_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFindItemSlotInfo> FoundBatteryItems;  // 0x03E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EnergyPerSecond;  // 0x03F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FractionalUnit;  // 0x03F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFindItemSlotInfo> FilteredBatteryItems;  // 0x03F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanSeeSun;  // 0x0408, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_AtmosphereController_C* AtmosphereController;  // 0x0410, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaTime;  // 0x0418, size 0x4

    UFUNCTION(BlueprintCallable) void CheckForSun();
    UFUNCTION() void ExecuteUbergraph_BP_ModifierState_Charge(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindAtmosphereController();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsFocused(int32 FocusedSlot, AIcarusItem*& FocusedItem);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
};
