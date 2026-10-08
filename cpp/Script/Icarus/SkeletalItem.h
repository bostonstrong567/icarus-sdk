// /Script/Icarus.SkeletalItem
// Derives from: AIcarusItem > AIcarusActor > AActor > UObject
// size 0x580, declared in Icarus/Source/Icarus/Actors/SkeletalItem.h

UCLASS(MinimalAPI, Config=Engine)
class ASkeletalItem : public AIcarusItem
{
public:
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMeshRoot;  // 0x0570, size 0x8
};
