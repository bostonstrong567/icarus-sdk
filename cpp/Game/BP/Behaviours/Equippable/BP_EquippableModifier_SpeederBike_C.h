// /Game/BP/Behaviours/Equippable/BP_EquippableModifier_SpeederBike.BP_EquippableModifier_SpeederBike_C
// Derives from: UEquippableModifier > UActorComponent > UObject
// size 0x105, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_EquippableModifier_SpeederBike_C : public UEquippableModifier
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ItemName;  // 0x00E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ID;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bActive;  // 0x0104, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_EquippableModifier_SpeederBike(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ItemEquipped();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ItemUnequipped();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateModifier(bool bActive);  // parameters 0x1
};
