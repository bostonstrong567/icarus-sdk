// /Script/Engine.StaticMeshActor
// Derives from: AActor > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/Engine/StaticMeshActor.h

UCLASS(Config=Engine)
class AStaticMeshActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UStaticMeshComponent* StaticMeshComponent;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere) bool bStaticMeshReplicateMovement;  // 0x0228, size 0x1
    UPROPERTY(EditAnywhere) ENavDataGatheringMode NavigationGeometryGatheringMode;  // 0x0229, size 0x1

    UFUNCTION(BlueprintCallable) void SetMobility(TEnumAsByte<EComponentMobility> InMobility);  // parameters 0x1

    // Virtual functions that start here:
    //   GetGeometryGatheringMode
};
