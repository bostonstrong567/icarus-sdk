// /Script/Icarus.WorldObserverSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x50, declared in Icarus/Source/Icarus/Subsystems/World/WorldObserverSubsystem.h

UCLASS()
class UWorldObserverSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FGenericWorldEvent OnTreeChopped;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FGenericWorldEvent OnAnimalKilled;  // 0x0040, size 0x10
};
