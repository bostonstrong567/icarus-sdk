// /Script/Engine.NavigationSystemBase
// Derives from: UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/AI/NavigationSystemBase.h

UCLASS(Abstract, Transient, Config=Engine)
class UNavigationSystemBase : public UObject
{
public:

    // Virtual functions that start here:
    //   AppendConfig, ApplyWorldOffset, CleanUp, Configure, GetMainNavData, InitializeForWorld
    //   IsNavigationBuilt, OnInitializeActors, Tick
};
