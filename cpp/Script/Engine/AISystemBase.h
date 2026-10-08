// /Script/Engine.AISystemBase
// Derives from: UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/AI/AISystemBase.h

UCLASS(Abstract, Config=Engine)
class UAISystemBase : public UObject
{
public:
    UPROPERTY(Config) FSoftClassPath AISystemClassName;  // 0x0028, size 0x18
    UPROPERTY(Config) FName AISystemModuleName;  // 0x0040, size 0x8
    UPROPERTY(Config) bool bInstantiateAISystemOnClient;  // 0x0050, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FDelegateHandle OnMatchStateSetHandle;  // 0x0048, private

    // Virtual functions that start here:
    //   CleanupWorld, InitializeActorsForPlay, OnMatchStateSet, StartPlay, WorldOriginLocationChanged
};
