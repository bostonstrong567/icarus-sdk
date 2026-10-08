// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_Mission_Expedition_CrashSite4.BP_Faction_Mission_Expedition_CrashSite4_C
// Derives from: ABP_Faction_Mission_Crate_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x390, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_Expedition_CrashSite4_C : public ABP_Faction_Mission_Crate_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DPS_Crashed_O;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DPS_Crashed_H;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DPS_Crashed_N1;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DPS_Crashed_N;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DPS_Crashed_F;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DPS_Crashed_D;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FactionSatellite_FX;  // 0x0388, size 0x8
};
