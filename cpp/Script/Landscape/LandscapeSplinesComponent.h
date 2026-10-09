// /Script/Landscape.LandscapeSplinesComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x480, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeSplinesComponent.h

UCLASS(MinimalAPI, Config=Engine)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<ULandscapeSplineControlPoint*> ControlPoints;  // 0x0450, size 0x10
    UPROPERTY() TArray<ULandscapeSplineSegment*> Segments;  // 0x0460, size 0x10
    UPROPERTY() TArray<UMeshComponent*> CookedForeignMeshComponents;  // 0x0470, size 0x10
public:
    UFUNCTION(BlueprintCallable) TArray<USplineMeshComponent*> GetSplineMeshComponents();  // parameters 0x10
};
