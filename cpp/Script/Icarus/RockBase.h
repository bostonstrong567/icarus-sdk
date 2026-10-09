// /Script/Icarus.RockBase
// Derives from: AIcarusActor > AActor > UObject
// size 0x418, declared in Icarus/Source/Icarus/Objects/RockBase.h

UCLASS(Config=Engine)
class ARockBase : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UDurableComponent* DurableComponent;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UHitableComponent* HitableComponent;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USceneComponent* BreakableMeshContainer;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UStaticMeshComponent* BaseMesh;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFLODActorComponent* FLODActorComponent;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBreakableRockDataRowHandle BreakableRockData;  // 0x02E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle ExperienceEventRow;  // 0x0300, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<bool> BreakArray;  // 0x0318, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UStaticMeshComponent*> MeshArray;  // 0x0328, size 0x10
protected:
    bool bHasBeenDamaged;  // 0x0338, not reflected
    FIcarusDamagePacket LastDamagePacket;  // 0x0340, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 CalculateBreakCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetBreakCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasInitialized() const;  // parameters 0x1
    UFUNCTION(NetMulticast, BlueprintNativeEvent) void Multi_OnRockItemSpawned(FVector Location);  // parameters 0xC
    UFUNCTION() void OnActorDamaged(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION() void OnFLODReveal(UFLODActorComponent* Component, AActor* Actor, const FTransform& Transform);  // parameters 0x40
    UFUNCTION() void OnHealthUpdated(UActorState* State, float NewHealth);  // parameters 0xC
    UFUNCTION() void OnRep_BreakArray();
    UFUNCTION(BlueprintNativeEvent) void PlayBreakingHitEffects(FVector Location);  // parameters 0xC

    // Virtual functions that start here:
    //   Multi_OnRockItemSpawned_Implementation, PlayBreakingHitEffects_Implementation
};
