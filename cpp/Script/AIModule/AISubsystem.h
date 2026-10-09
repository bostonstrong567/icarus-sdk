// /Script/AIModule.AISubsystem
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/AIModule/Classes/AISubsystem.h

UCLASS(Config=Engine)
class UAISubsystem : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UAISystem* AISystem;  // 0x0030, size 0x8
};
