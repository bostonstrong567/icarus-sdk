// /Script/ChaosSolverEngine.ChaosSolverSettings
// Derives from: UDeveloperSettings > UObject
// size 0x58, declared in Engine/Source/Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosSolverSettings.h

UCLASS(Config=Engine)
class UChaosSolverSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) FSoftClassPath DefaultChaosSolverActorClass;  // 0x0040, size 0x18
};
