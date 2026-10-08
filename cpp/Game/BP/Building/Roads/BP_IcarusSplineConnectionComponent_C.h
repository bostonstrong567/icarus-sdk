// /Game/BP/Building/Roads/BP_IcarusSplineConnectionComponent.BP_IcarusSplineConnectionComponent_C
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x201, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusSplineConnectionComponent_C : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<SplineTypes> SplineType;  // 0x0200, size 0x1
};
