// /Script/AIModule.AISubsystem
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/AIModule/Classes/AISubsystem.h

UCLASS(Config=Engine)
class UAISubsystem : public UObject
{
public:
    UPROPERTY() UAISystem* AISystem;  // 0x0030, size 0x8
};
