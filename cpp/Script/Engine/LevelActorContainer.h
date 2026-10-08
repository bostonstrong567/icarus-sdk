// /Script/Engine.LevelActorContainer
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/LevelActorContainer.h

UCLASS(MinimalAPI)
class ULevelActorContainer : public UObject
{
public:
    UPROPERTY(Transient) TArray<AActor*> Actors;  // 0x0028, size 0x10
};
