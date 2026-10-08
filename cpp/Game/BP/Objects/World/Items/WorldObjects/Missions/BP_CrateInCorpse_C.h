// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_CrateInCorpse.BP_CrateInCorpse_C
// Derives from: ABP_Faction_Mission_Crate_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x370, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CrateInCorpse_C : public ABP_Faction_Mission_Crate_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_ObjectMesh3;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_ObjectMesh2;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_ObjectMesh1;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x0368, size 0x8
};
