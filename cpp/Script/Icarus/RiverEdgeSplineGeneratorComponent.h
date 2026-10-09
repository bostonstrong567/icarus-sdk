// /Script/Icarus.RiverEdgeSplineGeneratorComponent
// Derives from: UActorComponent > UObject
// size 0xB8, declared in Icarus/Source/Icarus/World/RiverEdgeSplineGeneratorComponent.h

UCLASS(Config=Engine)
class URiverEdgeSplineGeneratorComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DistanceStepSize;  // 0x00B0, size 0x4
public:
    UFUNCTION(BlueprintCallable) static void ClearSplines(USplineComponent* LeftSpline, USplineComponent* RightSpline);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GenerateSplines(USplineComponent* RiverSpline, USplineComponent* LeftSpline, USplineComponent* RightSpline, float WaterfallCullHeight, float SplineMeshHeightOffset, float Scale) const;  // parameters 0x24
};
