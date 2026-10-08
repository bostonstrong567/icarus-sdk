// /Script/Icarus.LakeSplineComponent
// Derives from: UEdgeSplineComponent > USplineComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x560, declared in Icarus/Source/Icarus/World/LakeSplineComponent.h

UCLASS(Config=Engine)
class ULakeSplineComponent : public UEdgeSplineComponent
{
public:

    UFUNCTION(BlueprintCallable) void ConstructFromPrefabTemplate(const FPrefabLake& PrefabLake);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void ConstructFromTransformArray(const TArray<FTransform>& Transforms, ESplineLoopDirection LoopDirection);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static TArray<FVector> GetEdgePointsFromLakePoints(const TMap<FIntPoint, FVector>& LakePoints);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static FVector GetEditorViewportCameraLocation();  // parameters 0xC
    UFUNCTION(BlueprintCallable) static TMap<FIntPoint, FVector> GetLakePoints(AActor* Target, FTransform Transform, const TArray<FVector>& TraceLocations, float Density);  // parameters 0xA8
};
