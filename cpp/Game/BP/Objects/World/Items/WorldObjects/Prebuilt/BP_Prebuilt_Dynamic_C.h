// /Game/BP/Objects/World/Items/WorldObjects/Prebuilt/BP_Prebuilt_Dynamic.BP_Prebuilt_Dynamic_C
// Derives from: ABP_Prebuilt_Base_C > APrebuiltStructure > AIcarusActor > AActor > UObject
// size 0x430, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prebuilt_Dynamic_C : public ABP_Prebuilt_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0428, size 0x8
};
