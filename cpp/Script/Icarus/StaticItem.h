// /Script/Icarus.StaticItem
// Derives from: AIcarusItem > AIcarusActor > AActor > UObject
// size 0x580, declared in Icarus/Source/Icarus/Actors/StaticItem.h

UCLASS(Config=Engine)
class AStaticItem : public AIcarusItem
{
public:
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMeshRoot;  // 0x0570, size 0x8
};
