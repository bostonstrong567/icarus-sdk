// /Script/Engine.TickableWorldSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Public/Subsystems/WorldSubsystem.h

UCLASS(Abstract)
class UTickableWorldSubsystem : public UWorldSubsystem
{
private:
    bool bInitialized;  // 0x0038, not reflected
};
