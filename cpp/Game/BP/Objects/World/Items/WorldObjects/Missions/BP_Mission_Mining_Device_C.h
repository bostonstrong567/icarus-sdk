// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Mining_Device.BP_Mission_Mining_Device_C
// Derives from: ABP_Faction_Mission_Crate_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x368, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Mining_Device_C : public ABP_Faction_Mission_Crate_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FactionSatellite_FX;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x0360, size 0x8
};
