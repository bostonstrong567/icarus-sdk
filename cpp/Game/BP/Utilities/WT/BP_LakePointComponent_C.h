// /Game/BP/Utilities/WT/BP_LakePointComponent.BP_LakePointComponent_C
// Derives from: UActorComponent > UObject
// size 0xB0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_LakePointComponent_C : public UActorComponent
{
public:

    UFUNCTION(BlueprintCallable) void FixVolumeCollision();
    UFUNCTION(BlueprintCallable) void Generate_Points(float DensityOverride, bool MinLakeDepthOverride, TArray<FWaterPoint>& WaterPoints, TMap<FIntPoint, FVector>& ResultsMap);  // parameters 0x68, named "Generate Points"
    UFUNCTION(BlueprintCallable) void GetWaterPlaneScale(FVector& Scale);  // parameters 0xC
};
