// /Script/GeometryCollectionEngine.GeometryCollectionActor
// Derives from: AActor > UObject
// size 0x230, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionActor.h

UCLASS(Config=Engine)
class AGeometryCollectionActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UGeometryCollectionComponent* GeometryCollectionComponent;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;  // 0x0228, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit) const;  // parameters 0xA1
};
