// /Script/Engine.AutoDestroySubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Engine/AutoDestroySubsystem.h

UCLASS()
class UAutoDestroySubsystem : public UTickableWorldSubsystem
{
public:
    UPROPERTY() TArray<AActor*> ActorsToPoll;  // 0x0040, size 0x10

    UFUNCTION() void OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
};
