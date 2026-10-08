// /Game/ASS/ENV/RCK/SM_LC_Rocks/DLC2/AlienRock/BP_AlienRock_01_Radioactive.BP_AlienRock_01_Radioactive_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_AlienRock_01_Radioactive_C : public AIcarusActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Crystal;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Rock;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02D0, size 0x8
};
