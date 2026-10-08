// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_QueenSpline.BP_QueenSpline_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_QueenSpline_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USplineComponent* Path;  // 0x0320, size 0x8
};
