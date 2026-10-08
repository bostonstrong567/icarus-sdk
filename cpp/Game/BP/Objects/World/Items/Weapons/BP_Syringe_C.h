// /Game/BP/Objects/World/Items/Weapons/BP_Syringe.BP_Syringe_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x588, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Syringe_C : public ASkeletalItem
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0580, size 0x8
};
