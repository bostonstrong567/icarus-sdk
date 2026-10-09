// /Script/Engine.SkeletalMeshActor
// Derives from: AActor > UObject
// size 0x2A8, declared in Engine/Source/Runtime/Engine/Classes/Animation/SkeletalMeshActor.h

UCLASS(Config=Engine)
class ASkeletalMeshActor : public AActor, public IMatineeAnimInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bShouldDoAnimNotifies : 1;  // 0x0228, mask 0x01
    UPROPERTY(Deprecated) uint8 bWakeOnLevelStart : 1;  // 0x0228, mask 0x02
    UPROPERTY(Replicated, ReplicatedUsing, Transient) USkeletalMesh* ReplicatedMesh;  // 0x0238, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing, Transient) UPhysicsAsset* ReplicatedPhysAsset;  // 0x0240, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing) UMaterialInterface* ReplicatedMaterial0;  // 0x0248, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing) UMaterialInterface* ReplicatedMaterial1;  // 0x0250, size 0x8
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USkeletalMeshComponent* SkeletalMeshComponent;  // 0x0230, size 0x8
    TMap<FName,TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>,0> > CurrentlyPlayingMontages;  // 0x0258, not reflected
public:
    UFUNCTION() void OnRep_ReplicatedMaterial0();
    UFUNCTION() void OnRep_ReplicatedMaterial1();
    UFUNCTION() void OnRep_ReplicatedMesh();
    UFUNCTION() void OnRep_ReplicatedPhysAsset();

    // Virtual functions that start here:
    //   OnRep_ReplicatedMaterial0, OnRep_ReplicatedMaterial1, OnRep_ReplicatedMesh
    //   OnRep_ReplicatedPhysAsset
};
