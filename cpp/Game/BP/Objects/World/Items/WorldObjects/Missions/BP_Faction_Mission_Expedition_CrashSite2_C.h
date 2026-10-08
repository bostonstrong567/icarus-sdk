// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_Mission_Expedition_CrashSite2.BP_Faction_Mission_Expedition_CrashSite2_C
// Derives from: ABP_Faction_Mission_Crate_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x378, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_Expedition_CrashSite2_C : public ABP_Faction_Mission_Crate_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DPS_Crashed_C;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DPS_Crashed_N;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DPS_Crashed_G;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FactionSatellite_FX;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x0370, size 0x8
};
