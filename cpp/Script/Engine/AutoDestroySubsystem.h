// /Script/Engine.AutoDestroySubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Engine/AutoDestroySubsystem.h

UCLASS()
class UAutoDestroySubsystem : public UTickableWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<AActor*> ActorsToPoll;  // 0x0040, size 0x10
public:
    UFUNCTION() void OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
};
