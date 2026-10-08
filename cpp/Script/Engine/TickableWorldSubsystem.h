// /Script/Engine.TickableWorldSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Public/Subsystems/WorldSubsystem.h

UCLASS(Abstract)
class UTickableWorldSubsystem : public UWorldSubsystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    bool bInitialized;  // 0x0038, private
};
