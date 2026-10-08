// /Game/BP/World/InstancedLevels/BP_InstancedCaveEntrance.BP_InstancedCaveEntrance_C
// Derives from: AInstancedCaveEntrance > AActor > UObject
// size 0x248, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_InstancedCaveEntrance_C : public AInstancedCaveEntrance
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* TooltipLocation;  // 0x0240, size 0x8
};
