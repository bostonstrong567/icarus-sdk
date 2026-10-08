// /Game/ASS/PRP/PRP_AlienFossil_01/BP_AlienBoneFossil_Skeleton_GEN_01.BP_AlienBoneFossil_Skeleton_GEN_01_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_AlienBoneFossil_Skeleton_GEN_01_C : public AIcarusActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_AlienBoneFossil_Skeleton_GEN_01;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02D0, size 0x8
};
