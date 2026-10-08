// /Game/BP/Utilities/WT/WT_CaveLight.WT_CaveLight_C
// Derives from: AActor > UObject
// size 0x228, a blueprint class, blueprint

UCLASS(Config=Engine)
class AWT_CaveLight_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0220, size 0x8
};
