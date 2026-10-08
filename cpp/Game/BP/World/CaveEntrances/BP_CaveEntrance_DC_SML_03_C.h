// /Game/BP/World/CaveEntrances/BP_CaveEntrance_DC_SML_03.BP_CaveEntrance_DC_SML_03_C
// Derives from: ABP_BaseCaveEntrance_C > ACaveEntranceBase > AIcarusActor > AActor > UObject
// size 0x338, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CaveEntrance_DC_SML_03_C : public ABP_BaseCaveEntrance_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0330, size 0x8
};
