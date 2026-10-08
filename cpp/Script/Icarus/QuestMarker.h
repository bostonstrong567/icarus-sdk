// /Script/Icarus.QuestMarker
// Derives from: AActor > UObject
// size 0x248, declared in Icarus/Source/Icarus/Quests/QuestMarker.h

UCLASS(Abstract, Config=Engine)
class AQuestMarker : public AActor, public IGameplayTagAssetInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer GameplayTags;  // 0x0228, size 0x20
};
