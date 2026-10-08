// /Script/Icarus.IcarusRocketSpawnBase
// Derives from: AIcarusActor > AActor > UObject
// size 0x300, declared in Icarus/Source/Icarus/Objects/RocketSpawn.h

UCLASS(Config=Engine)
class AIcarusRocketSpawnBase : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftClassPtr<AIcarusRocket> SpawnDropshipClass;  // 0x02C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FPlayerCharacterID AssignedPlayerID;  // 0x02E8, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetGroupIndex() const;  // parameters 0x4
};
