// /Script/Icarus.GameplayTagActor
// Derives from: AActor > UObject
// size 0x248, declared in Icarus/Source/Icarus/AI/Creatures/GameplayTagActor.h

UCLASS(Config=Engine)
class AGameplayTagActor : public AActor, public IMutableGameplayTagInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer GameplayTags;  // 0x0228, size 0x20
};
