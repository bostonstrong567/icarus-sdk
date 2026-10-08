// /Game/BP/Mounts/BP_Tame_Base.BP_Tame_Base_C
// Derives from: ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF50, a blueprint class, blueprint

UCLASS(Abstract, Config=Game)
class ABP_Tame_Base_C : public ABP_Mount_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0F38, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AIcarusItem* HeldItem;  // 0x0F40, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HeldItemSocket;  // 0x0F48, size 0x8

    UFUNCTION(BlueprintCallable) void AddHeldItem(AIcarusItem* HeldItem);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Tame_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_HeldItem();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveHeldItem();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void SimulateHeldItem(AIcarusItem* CurrentHeldItem);  // parameters 0x8
};
