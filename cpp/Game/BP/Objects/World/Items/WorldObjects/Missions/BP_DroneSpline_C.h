// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_DroneSpline.BP_DroneSpline_C
// Derives from: AActor > UObject
// size 0x230, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DroneSpline_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USplineComponent* Spline;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
};
