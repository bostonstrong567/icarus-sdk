// /Script/Engine.Subsystem
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Public/Subsystems/Subsystem.h

UCLASS(Abstract)
class USubsystem : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FSubsystemCollectionBase * InternalOwningSubsystem;  // 0x0028, private

    // Virtual functions that start here:
    //   Deinitialize, Initialize, ShouldCreateSubsystem
};
