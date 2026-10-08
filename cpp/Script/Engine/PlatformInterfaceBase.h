// /Script/Engine.PlatformInterfaceBase
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/PlatformInterfaceBase.h

UCLASS(Transient, MinimalAPI)
class UPlatformInterfaceBase : public UObject
{
public:
    UPROPERTY() TArray<FDelegateArray> AllDelegates;  // 0x0028, size 0x10

    // Virtual functions that start here:
    //   AddDelegate, ClearDelegate
};
