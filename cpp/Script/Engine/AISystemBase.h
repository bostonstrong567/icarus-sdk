// /Script/Engine.AISystemBase
// Derives from: UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/AI/AISystemBase.h

UCLASS(Abstract, Config=Engine)
class UAISystemBase : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Config) FSoftClassPath AISystemClassName;  // 0x0028, size 0x18
    UPROPERTY(Config) FName AISystemModuleName;  // 0x0040, size 0x8
    FDelegateHandle OnMatchStateSetHandle;  // 0x0048, not reflected
    UPROPERTY(Config) bool bInstantiateAISystemOnClient;  // 0x0050, size 0x1

    // Virtual functions that start here:
    //   CleanupWorld, InitializeActorsForPlay, OnMatchStateSet, StartPlay, WorldOriginLocationChanged
};
