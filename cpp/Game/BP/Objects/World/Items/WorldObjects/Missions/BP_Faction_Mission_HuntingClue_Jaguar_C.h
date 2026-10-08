// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_Mission_HuntingClue_Jaguar.BP_Faction_Mission_HuntingClue_Jaguar_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x350, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_HuntingClue_Jaguar_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FlyAudio;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flies2;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flies1;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CF_Wolf_Den_Bones06;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flies;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x0348, size 0x8
};
