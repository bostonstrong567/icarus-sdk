// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_SandWorm_Clue3.BP_Faction_SandWorm_Clue3_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x360, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_SandWorm_Clue3_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_SandMould;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Extermination_SandwormClue_3;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FlyAudio;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flies2;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flies1;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flies;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x0358, size 0x8
};
