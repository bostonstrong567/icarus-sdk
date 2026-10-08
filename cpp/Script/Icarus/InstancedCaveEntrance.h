// /Script/Icarus.InstancedCaveEntrance
// Derives from: AActor > UObject
// size 0x240, declared in Icarus/Source/Icarus/World/InstancedLevels/InstancedCaveEntrance.h

UCLASS(Config=Engine)
class AInstancedCaveEntrance : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EntranceID;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, Instanced) UStaticMeshComponent* BaseMesh;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, Instanced) USceneComponent* ArrowComponent;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UStaticMeshComponent* TeleportPlacementDisc;  // 0x0238, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetOffsetTeleportPlacementDiscTransform() const;  // parameters 0x30
};
