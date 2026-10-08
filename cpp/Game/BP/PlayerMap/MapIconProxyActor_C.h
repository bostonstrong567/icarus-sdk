// /Game/BP/PlayerMap/MapIconProxyActor.MapIconProxyActor_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class AMapIconProxyActor_C : public AIcarusActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02C8, size 0x8
};
