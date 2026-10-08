// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Apply_To_Target.BP_ActionableBehaviour_Apply_To_Target_C
// Derives from: UBP_ActionableBehaviour_Hold_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3B0, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Apply_To_Target_C : public UBP_ActionableBehaviour_Hold_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* Owning_Player;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AIcarusCharacter* TargetCharacter;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool HasTargetCharacter;  // 0x0380, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> StoredMontages;  // 0x0388, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle VehicleTagQuery;  // 0x0398, size 0x18

    UFUNCTION(BlueprintCallable) void CompleteHold(bool Success);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void EndHold(bool Success);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Apply_To_Target(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsHolding();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B70C6DB20F(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Play_Animation_Montage_Healing();  // named "Play Animation Montage Healing"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_StartHold(AActor* ActorStatedHoldOn);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void SetTargetCharacter(AIcarusCharacter* Character, bool HasTargetCharacter);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Stop_Bandaging();  // named "Stop Bandaging"
};
