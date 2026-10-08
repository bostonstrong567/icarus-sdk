// /Game/BP/Settlement/Buildings/BP_SettlementBuilding_Watchtower.BP_SettlementBuilding_Watchtower_C
// Derives from: ABP_SettlementBuilding_C > ASettlementBuilding > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SettlementBuilding_Watchtower_C : public ABP_SettlementBuilding_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* GuardPoint;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* EntryPoint;  // 0x04B8, size 0x8
};
