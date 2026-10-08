// /Script/Icarus.MapSearchAreaProxy
// Derives from: AIcarusActor > AActor > UObject
// size 0x2E0, declared in Icarus/Source/Icarus/Systems/Map/MapSearchAreaProxy.h

UCLASS(Config=Engine)
class AMapSearchAreaProxy : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Radius;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FMapSearchAreaRowHandle SearchArea;  // 0x02C4, size 0x18

    // Virtual functions that start here:
    //   Reload
};
