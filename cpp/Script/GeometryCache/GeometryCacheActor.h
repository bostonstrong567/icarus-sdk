// /Script/GeometryCache.GeometryCacheActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheActor.h

UCLASS(Config=Engine)
class AGeometryCacheActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UGeometryCacheComponent* GeometryCacheComponent;  // 0x0220, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) UGeometryCacheComponent* GetGeometryCacheComponent() const;  // parameters 0x8
};
