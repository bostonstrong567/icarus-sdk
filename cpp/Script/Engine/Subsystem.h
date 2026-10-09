// /Script/Engine.Subsystem
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Public/Subsystems/Subsystem.h

UCLASS(Abstract)
class USubsystem : public UObject
{
private:
    FSubsystemCollectionBase * InternalOwningSubsystem;  // 0x0028, not reflected

    // Virtual functions that start here:
    //   Deinitialize, Initialize, ShouldCreateSubsystem
};
