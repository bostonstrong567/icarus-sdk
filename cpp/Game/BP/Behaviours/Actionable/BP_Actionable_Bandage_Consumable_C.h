// /Game/BP/Behaviours/Actionable/BP_Actionable_Bandage_Consumable.BP_Actionable_Bandage_Consumable_C
// Derives from: UBP_ActionableBehaviour_Hold_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x380, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_Actionable_Bandage_Consumable_C : public UBP_ActionableBehaviour_Hold_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> StoredMontages;  // 0x0370, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanHold();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CompleteHold(bool Success);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void EndHold(bool Success);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Actionable_Bandage_Consumable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_Bandage();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_StopBandaging();
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B748390F73(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_StartHold(AActor* ActorStatedHoldOn);  // parameters 0x8
};
