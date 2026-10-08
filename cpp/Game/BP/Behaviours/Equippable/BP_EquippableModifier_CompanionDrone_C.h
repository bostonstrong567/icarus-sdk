// /Game/BP/Behaviours/Equippable/BP_EquippableModifier_CompanionDrone.BP_EquippableModifier_CompanionDrone_C
// Derives from: UBP_EquippableModifier_C > UEquippableModifier > UActorComponent > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_EquippableModifier_CompanionDrone_C : public UBP_EquippableModifier_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SpawnedDrone;  // 0x0100, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_EquippableModifier_CompanionDrone(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
};
