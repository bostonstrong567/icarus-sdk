// /Script/Icarus.River
// Derives from: AWaterBody > AIcarusActor > AActor > UObject
// size 0x348, declared in Icarus/Source/Icarus/World/River.h

UCLASS(Config=Engine)
class ARiver : public AWaterBody
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLavaRiverFlowPointData> LavaFlowPointData;  // 0x0338, size 0x10

    UFUNCTION(BlueprintCallable) void DisableOcclusionForSplineMeshComponent(USplineMeshComponent* SplineMeshComponent);  // parameters 0x8
};
