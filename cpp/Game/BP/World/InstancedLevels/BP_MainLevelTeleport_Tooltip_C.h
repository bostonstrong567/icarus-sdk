// /Game/BP/World/InstancedLevels/BP_MainLevelTeleport_Tooltip.BP_MainLevelTeleport_Tooltip_C
// Derives from: ABP_MainLevelTeleport_C > ABaseLevelTeleport > AIcarusActor > AActor > UObject
// size 0x3E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MainLevelTeleport_Tooltip_C : public ABP_MainLevelTeleport_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x03D8, size 0x8
};
